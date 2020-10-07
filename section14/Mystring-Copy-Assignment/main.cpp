// c++ provides default assignment operator for assigning to an object

// default memberwise assignment is used e.g. shallow copy , for raw pointer data members, a deep copy must be used. 

// deep copy, 
// the LHS referred to by the 'this' pointer and RHS object is passed into the method
// rhs being assigned into lhs therefore make a deep copy of it to the LHS.
// this object is overwritten therefore deallocation of its own data on the heap --> prevents memory leak.
// then create new data storage and put the RHS values in this new data. 



#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"}; // allocates a str pointer to point to "Hello" on the heap               // overloaded constructor
    Mystring b;   //executes no args whihc creates a string with just null terminator                          // no-args contructor
    b = a; //overload of = applied.                                     // copy assignment 
                                                  // b.operator=(a)
    b = "This is a test";                 // b.operator=("This is a test");
  
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};            // copy constructor 
    Mystring stooges;                   // no-args constructor
    
    empty = stooge;                     // copy assignment operator
    
    empty.display();                      // Larry : 5
    larry.display();                         // Larry : 5
    stooge.display();                     // Larry : 5
    empty.display();                      // Larry : 5
    
    stooges = "Larry, Moe, and Curly";  
    stooges.display();                              // Larry, Moe, and Curly : 21
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    cout << "=== Loop 1 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();                                        // Larry
                                                                // Moe
                                                                //Curly
    cout << "=== Loop 2 ==================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";                              // copy assignment
        
    cout << "=== Loop 3 ================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();                                     // Changed
                                                            // Changed
                                                            // Changed
    
    return 0;
}