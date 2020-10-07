/*

using string streams

- allows us to read or write from strings in memory much as we would write to files

- very powerful 

- useful for data validation 

using string streams

stringstream, isstringstream, ostringstream

1) #include <sstream>
2) Declare an stringstream, istringstream or ostringobject object
3) connect it to a std::string
4) Read/write data from/to the string stream using formatted I/O


reading from string stream

#include <sstream>

int num{};
double total{};
std::string name {};
std::string info {"Moe 100 1234.5};

std::istringstream iss{info};
iss >> name >> num >> total; read from the string stream to fill up values .

writing data to a stringstream 

#include <sstream>

int num {100};
double total {1234.5};
std::string name {"Moe"};

std::ostringstream oss{};

oss << name << " " << num << " " << total; 
std::cout << oss.str() << std::endl;
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main(){
    int num {};
    double total {};
    std::string name{};
    
    std::string info {"Moe 100 1234.5"}; // string acts as a file in this case. 
    
    std::istringstream iss {info};  //create a string stream object and init to the values of info
    
    iss >> name >> num >> total; 
    
    std::cout << std::setw(10) << std::left << name << std::setw(5) << num << std::setw(10) << total << std::endl;
    
    std::cout << "\n---------------------------------------" << std::endl;
    
    std::ostringstream oss {}; // has its own stream buffer in this object 
    oss << std::setw(10) << std::left << name
          << std::setw(5) << num
          << std::setw(10) << total << std::endl;
    std::cout << oss.str() << std::endl; // only have a stream connected to a string therefore must have internal string buffer .str()
    
    
    std::cout << "\n--- Data validation ------------------------------------" << std::endl;
    
    int value{};
    std::string entry {};
    bool done = false;
    
    do {
        std::cout << "Please enter an integer: ";
        std::cin >> entry;
        std::istringstream validator {entry}; // initialse a stream object with the value entered into entry. 
        if (validator >> value)  // if you can insert the validator string stream into value then its a valid integer and this returns true. -
            done = true; // cancel do while loop 
        else 
            std::cout << "Sorry, that's not an integer" << std::endl;
            
        // discards the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        // ignores the values on the cin stream up the std::streamsize::max of this system, so goes write to end of the stream 
        // this is for when the user enters data after something has been extracted: 12.38, .38 discarded, 12 hello butt, hello and butt discarded 
        // because the cin has extracted the value we want leaving this left on the input buffer --> meaning invalid data is reset after the next input
    } while (!done); // while done == false; 
    
    std::cout << "You entered the integer: " << value << std::endl;
    
    std::cout << std::endl;
    return 0;
}
