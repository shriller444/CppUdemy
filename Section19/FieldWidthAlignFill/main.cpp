/*

Default when displaying floating point values is:
 - setw - not set by default
 - left - when no field width, right - when using field width 
 
 - fill - not set by default , blank space is used
 
- some of these manipulators affect only the next data element put on the stream. 
- field width and justification only applied to next data element on the stream. 

setw(10) --> right justifies the data in the stream if does not fit into this width , only applies to one data item in a stream.

1234567890
     balls --> right justified on the width of 10 for the stream.
use std::left to left justify it. 

setfil('-') must have a wdidth value , applies right justification on the next stream with dashes filling other empty values in width

setfill is persistent
*/

#include <iostream>
#include <iomanip>

void ruler() {
    std::cout << "\n12345678901234567890123456789012345678901234567890" << std::endl;
}

int main() {
    int num1 { 1234 };
    double num2 {1234.5678};
    std::string hello  {"Hello"};
    
    // Defaults
    std::cout << "\n--Defaults -------------------------------------------------------------------" << std::endl;
    ruler();
    std::cout << num1 
                   << num2 
                   << hello 
                   << std::endl;
    
     // Defaults - one per line
    std::cout << "\n--Defaults - one per line-----------------------------------------------------" << std::endl;
    ruler();
    std::cout << num1 <<std::endl;
    std::cout << num2 << std::endl;
    std::cout << hello << std::endl;
    
   // Set field width to 10 
   // Note the default justification is right for num1 only! it doest not carry on 
    std::cout << "\n--width 10 for num1-----------------------------------------------------------" << std::endl;
    ruler(); 
    std::cout << std::setw(10)  << num1 
                   << num2          
                   << hello 
                   << std::endl;
    
    // Set field width to 10 for the first 2 outputs
   // Note the default justification is right for both
    std::cout << "\n--width 10 for num1 and num2------------------------------------------------" << std::endl;
    ruler(); 
    std::cout << std::setw(10) << num1 
                   << std::setw(10) << num2  
                   << hello 
                   << std::endl;
                  
   // Set field width to 10 for all 3 outputs
   // Note the default justification is right for all
    std::cout << "\n--width 10 for num1 and num2 and hello--------------------------------------" << std::endl;
    ruler(); 
    std::cout << std::setw(10) << num1 
                  << std::setw(10) << num2  
                  << std::setw(10) << hello 
                  << std::endl;
                  
    // Set field width to 10 for all 3 outputs and justify all left
    std::cout << "\n--width 10 for num1 and num2 and hello left for all---------------------------" << std::endl;
    ruler(); 
    std::cout << std::setw(10) << std::left << num1 
                   << std::setw(10) << std::left << num2  
                   << std::setw(10) << std::left <<  hello 
                   << std::endl;
                  
    // setfill to a dash
    // this is persistent
    // Then repeat the previous display
    std::cout << std::setfill('-'); // persistent means it wont change and will always apply to the stream , only applies to setw
    std::cout << "\n--width 10 for num1 and num2 and hello left for all setfill to dash------------" << std::endl;
    ruler(); 
    std::cout << std::setw(10) << std::left << num1 
                   << std::setw(10) << std::left << num2  
                   << std::setw(10) << std::left <<  hello 
                   << std::endl;
//    
    // Set width to 10 for all, left justify left all and cary the setfill character
    std::cout << "\n--width 10 for num1 and num2 and hello - setfill varies------------------------" << std::endl;
    ruler(); 
    std::cout << std::setw(10) << std::left << std::setfill('*') << num1 
                  << std::setw(10) << std::left << std::setfill('#' )<< num2  
                  << std::setw(10) << std::left <<  std::setfill('*') << hello 
                  << std::endl;
//    
    std::cout << std::endl << std::endl;
    return 0;
}
