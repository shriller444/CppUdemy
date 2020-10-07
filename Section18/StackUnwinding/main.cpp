/*

stack unwinding

if an exception is thrown but not caught in the current scope
 - c++ tries to find a handler for the exception by unwinding the stack
 
 
 - function in which the exception was not caught terminates and removed from the call stack
 
 - if a TRY block was used then catch blocks are checked for a match
 
 - if no try blocks were used or the catch handler doesnt match then stack unwinding occurs again
 
 - if the stack is unwound back to main and no catch handler handles the exception then the program terminates. 
 
 - if a function is removed --> local variables destroyed --> destructors called --> memory leak if raw pointers were used
 - better to use smart pointers such as unique_ptr.
*/

#include <iostream>

void func_a();
void func_b();
void func_c();

void func_a() {
    std::cout << "Starting func_a" << std::endl;
    func_b(); // push b to stack 
    std::cout << "Ending func_a" << std::endl; // ran as b caught the throw exception 
}

void func_b() {
    std::cout << "Starting func_b" << std::endl;
    try {
        func_c(); //push c to stack
    }
    catch (int &ex) {
         std::cout << "Caught error in func_b" << std::endl;      // this catches the error in b preventing the shut down of all functions 
    }
    std::cout << "Ending func_b" << std::endl; // this can run after exception caught
}

void func_c()  {
    std::cout << "Starting func_c" << std::endl;
    throw 100; // throw 100 exception goes back to func_b after popping c , this wipes all functionality of all other functions
    std::cout << "Ending func_c" << std::endl; 
}

int main() {    //main on stack 
    
    std::cout << "Starting main" << std::endl;
    try { // func_a could cause an exception in the stack of function calls it opens.
        func_a(); // pushes on the stack
    }
    catch (int &ex) { // catches the 100 thrown at the end of stack unwinding process
        std::cout << "Caught error in main" << std::endl;
    }
    std::cout << "Finishing main" << std::endl;
    return 0;
}

//CALL STACK FUNCTIONS ARE WIPED ALONGSIDE OBJECTS SO RESOURCES MUST BE HANDLED CORRECTLY PREVENTING
// MEMORY LEAKS ETC.