#include <iostream>

using namespace std; // user the entire std namespace 

// qualified using namespace variant

using std::cout;
using std::cin;
using std::endl; 

// use only what you need 


int main()
{
    int favouriteNumber;
    
    std::cout << "Enter your favourite  number between 1-100: ";
    
    std::cin >> favouriteNumber;
    
    std::cout << "Amazing that is my favourite number too!" << std::endl;
    
    std::cout <<  "no really! " << favouriteNumber << " is my favourite number fr fr ngl" << std::endl;
    //  identifiers are created by programs and involves cout and cin
    // operators are like << input stream and /
    /*
     
      hello this is multi line comment 
    
    */
    
    return 0;
}
