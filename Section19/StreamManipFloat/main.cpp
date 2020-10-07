/*

formatting floating point values:

default when displaying floating point:
 - setprecision - number of digits displayed = 6 , rounding always occurs.
 - fixed - not fixed to a specific number of digits after the decimal point
 - noshowpoint - trailing zeroes are not displayed
 - nouppercase - when displaying in scientific notation 
 - noshowpos - no '+' is displayed for positive numbers. 
 
 
- These manip all further output to the stream.

1.23457e+008 // scientific notation , this means 1.23456 x 10 ^ 8 , E using uppercase

precision 9 = 1234567890. 

std::fixed --> precision from right hand side of digit , default 6 digits on the rhs 

set precision and fixed used to show how many decimal places to show back 


showpoint --> shows trailing zeroes depending on precision used to fill up that namespace

unsetf or resetios flags to reset
*/

#include <iostream>
#include <iomanip>

int main() {
    double num1 {123456789.987654321};
    double num2 {1234.5678};                     
    double num3 {1234.0};                          
 
    //using default settings
    std::cout << "--Defaults ----------------------------" << std::endl;
    std::cout << num1 << std::endl; // 1.23456e+08, 6 digits used and scientific notation to fill rest
    std::cout << num2<< std::endl;	 // 1234.57
    std::cout << num3<< std::endl;	 // 1234
    
    //Note how since we can't display in precision 2 scientific notation is used
    std::cout << std::setprecision(2);
    std::cout << "--Precision 2----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // 1.2e+08
    std::cout << num2<< std::endl;	 // 1.2e+03
    std::cout << num3<< std::endl;	 // 1.2e+03
    
    // Using precision 5
    std::cout << std::setprecision(5);
    std::cout << "--Precision 5----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // 1.2346e+08
    std::cout << num2<< std::endl;	 // 1234.6
    std::cout << num3<< std::endl;	 // 1234, ignores 0 as it rounds down to 1234

    // Using precision 9
    std::cout << std::setprecision(9);
    std::cout << "--Precision 9----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // 123456789
    std::cout << num2<< std::endl;	 // 1234.5678
    std::cout << num3<< std::endl;	 // 1234 , still rounds

    // Using precision 3 and fixed
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "--Precision 3 - fixed ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // 12345678.988 , 3 decimal places
    std::cout << num2<< std::endl;	 // 1234.568
    std::cout << num3<< std::endl;	 // 1234.000
    
    // Using precision  3, fixed and scientific notation
    // Note precision is after the decimal
    std::cout << std::setprecision(3)<< std::scientific;
    std::cout << "--Precision 3 - scientific  ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 //1.235e+08
    std::cout << num2<< std::endl;	 // 1.235e+08
    std::cout << num3<< std::endl;	 // 1.34e+03
    
    // Same but display capital 'E' in scientific 
    std::cout << std::setprecision(3) << std::scientific << std::uppercase;
    std::cout << "--Precision 3 - scientific - uppercase  ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // same as above but E
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    // Show '+' symbol for positive numbers
    std::cout << std::setprecision(3) << std::fixed << std::showpos;
    std::cout << "--Precision 3 - fixed - showpos ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // shows + for all in set precision 3 fixed therefore 3 decimal places and trailing zeros
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    
    // Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::resetiosflags(std::ios::showpos);
    
    // Show trailing zeroes up to precision 10
    
    std::cout << std::setprecision(10) << std::showpoint;
    std::cout << "-- precision 10 - showpoint ----------------------------" << std::endl;
    std::cout << num1 << std::endl;	 // shows zeroes to fill rest of precision 1234567890.0 , extra digit as of show point must make sense
    std::cout << num2<< std::endl;	 // 1234.567800
    std::cout << num3<< std::endl;	 // 1234.000000

// Back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);// unsets these 2 values 
    std::cout << std::setprecision(6); // return to original precision 
    std::cout << std::resetiosflags(std::ios::showpos); // no positive
    std::cout << std::resetiosflags(std::ios::showpoint); // no trailing zeroes

    std::cout << "--Back to defaults----------------------------" << std::endl;
    std::cout << num1 << std::endl;	
    std::cout << num2<< std::endl;	
    std::cout << num3<< std::endl;	
    
    return 0;
}
