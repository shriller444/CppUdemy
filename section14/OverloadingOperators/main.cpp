// Precedence and associativity cannot be changed
// 'arity' cannot be changed (cannot make division operator unary) --> cant change it being applied to 2 operators etc. 
// cant overload operators for primitive types 
// cant create new operators
// [] , (), -> , and assignment operator must be declared as member methods
// Other operators can be declared as member methods or global functions 

// overloading must make sense and users of class should know about it

#include <iostream>
#include "Mystring.h"

int main(){
    
    Mystring empty; // no args constructor
    Mystring larry("Larry"); // overloaded constructor
    Mystring stooge(larry); // copy constructor called
    
    empty.display();
    larry.display();
    stooge.display();
    
    return 0;
    
}