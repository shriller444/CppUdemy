/*

formatting boolean types

- default displays are 1 and 0 
- prefer to use true or false. 

- once set , further all values will be formatted this way. 

std::cout.setf(std::ios::boolalpha); --> set to this

reset to default
std::cout << std::resetiosflags(std::ios::boolalpha);

*/
#include <iostream>
#include <iomanip>  // Must include for manipulators

int main() {
  
    std::cout << "noboolalpha - default  (10 == 10) : " << (10 == 10)  << std::endl;
    std::cout << "noboolalpha - default  (10 == 20) : " << (10 == 20)  << std::endl;
    
    // Set to true/false formatting
    std::cout << std::boolalpha;    // change to true/false
    std::cout << "boolalpha   (10 == 10) : " << (10 == 10)  << std::endl;
    std::cout << "boolalpha   (10 == 20) : " << (10 == 20)  << std::endl;
    
     // setting still stays for future boolean insertions
    std::cout << "boolalpha   (10 == 10) : " << (10 == 10)  << std::endl;
    std::cout << "boolalpha   (10 == 20) : " << (10 == 20)  << std::endl;
    
    // Toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha  (10 == 10) : " << (10 == 10)  << std::endl;
    std::cout << "noboolalpha  (10 == 20) : " << (10 == 20)  << std::endl;
    
    // Set back to true/false using setf method
    std::cout.setf(std::ios::boolalpha); // ios is a class in the standard namespace and boolalpha is a flag of the class. 
    std::cout << "boolalpha   (10 == 10) : " << (10 == 10)  << std::endl;
    std::cout << "boolalpha   (10 == 20) : " << (10 == 20)  << std::endl;
    
    // resets to default which is 0/1, useful for changing ths stream to what you want. 
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "Default  (10 == 10) : " << (10 == 10)  << std::endl;
    std::cout << "Default  (10 == 20) : " << (10 == 20)  << std::endl;
    return 0;
}

