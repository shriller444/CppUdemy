/*

formatting integer types

- default when displaying integer values is:
 - dec (base 10)
 - noshowbase - prefix used to show hexadecimal or octal
 - nouppercase - when displaying a prefix and hex values it will be lower acse
 - noshowpos - no '+' displayed for positive numbers
 
- These manipulators affect ALL FURTHER OUTPUT to the stream.

formatting integer types - setting base
 
    num num {255};
    
    std::cout << std::dec << num << std::endl; // base 10
    std::cout << std::hex << num << std::endl; // hex base 16
    std::cout << std::oct << num << std::endl; // oct base 8 
    
    //
    255 --> show base --> 255
    ff --> show base --> Oxff = hex
    377 --> show base --> O377 = oct 
     
    std::cout << std::showbase; // showbase ^
    // always applies for everything after
    
    
    std::uppercase --> make O and hex upper case
    
    std::showpos --> shows positive sign. 
    
    can use setf and resetiosflags. 
    
    */
    
#include <iostream>
#include <iomanip>

int main() {
    int num {255};
 
    // Displaying using different bases
    std::cout << "\n------------------------------------------------------------" << std::endl;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // Displaying showing the base prefix for hex and oct
        std::cout << "\n------------------------------------------------------------" << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
     // Display the hex value in uppercase
    std::cout << "\n------------------------------------------------------------" << std::endl;
    std::cout << std::showbase << std::uppercase;
    std::cout << std::hex << num << std::endl;

    // Display the + sign in front of positive base 10 numbers
    std::cout << "\n------------------------------------------------------------" << std::endl;
    std::cout << std::showpos;
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;
    
    // setting using the set method
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    // resetting to defaults
    std::cout << std::resetiosflags(std::ios::basefield); // reset to decimal as this is default
    std::cout << std::resetiosflags(std::ios::showbase); // no base 
    std::cout << std::resetiosflags(std::ios::showpos); // no + sign 
    std::cout << std::resetiosflags(std::ios::uppercase); // lower case

    std::cout << "\n------------------------------------------------------------" << std::endl;
    std::cout << "Enter an integer : ";
    std::cin >> num;
    
    std::cout << "Decimal default  : " << num << std::endl;
    
    std::cout << "Hexadecimal      : " << std::hex << num << std::endl;
    std::cout << "Hexadecimal      : " << std::hex << std::uppercase << num << std::endl; // converts hex characters to be upper case
    std::cout << "Hexadecimal      : " << std::hex  << num << std::endl;
    std::cout << "Hexadecimal      : " << std::hex << std::nouppercase << num << std::endl; // converts back to lower

    std::cout << "Octal            : " << std::oct << num << std::endl;
    std::cout << "Hexadecimal      : " << std::hex << std::showbase << num << std::endl; // displays teh 0x for hex or 0 for octals
    std::cout << "Octal            : " << std::oct << num << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
