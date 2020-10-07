/*

Basic exceptiong handling concepts

- Exception handling
 - dealing with extraordinary situations
 - indicates that an extraordinary situation has been detected or occured
 - Program can deal with these in the correct manner. 
 
 
What causes exceptions

- Insufficient resources
- missing resources
- invalid operations
- range violations
- under/over flows
- illegal data etc. 

exception safe

when the code can handle exceptions. 

TERMS

EXCEPTION - an object/primitive type that raises a signal that an error has occurred

THROWEING AN EXCEPTION/RAISING - code detects the error hass occured or will occur
 - the place where the error is may not know how to handle the error.
 - code can throw an exception describing the error to another part of the program that knows how to handle it
 
 CATCHING AN EXCEPTION/HANDLE - code that handles the exception
 - may or may not cause the program to terminate
 
 c++ syntax
 
 throw
  - throws an exception followed by arg
  
 try{place code that may throw exception}
  - place code in this exception try block
  - if the thrown exception is handled by a catch handler
  - if no catch handler exists the program terminates
  
  catch (Exception ex) {code to handle the exception}
   - code that handles the execution
   - can have multiple catch handlers
   - may or may not terminate program.
   */
   

#include <iostream>

int main() {    
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    std::cout << "Enter the miles driven: ";
    std::cin >> miles;
    std::cout << "Enter the gallons used: ";
    std::cin >> gallons;
    
    try {
        if (gallons == 0)
            throw 0;
        miles_per_gallon = static_cast<double>(miles) / gallons;
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex) {
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    }
    std::cout << "Bye" << std::endl;
    return 0;
}

