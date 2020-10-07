// s1 = Mystring {"Frank"}; move assignment, works with R values which create temp objects.
        // - r value // 
// if using raw pointer then you should overload the move assignment operator for more efficency

// steal pointer of reference to R value being passed in thens set R value to a nullptr. 
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    // both have a str pointer to hello/hola on heap, one is a temp though
    
    Mystring a{"Hello"}; // Overloaded constructor
    
    //move assignment steals the pointer of Hola to be moved to 'a' and then null out the temp objects pointer then deleted.
    
    a = Mystring{"Hola"};              // Overloaded constructor then move assignment
    
    a = "Bonjour";  //has R value with temp object uses the copy assignment when no move assignment defined ( Overloaded constructor then move assignment)
    
 
//    Mystring empty;                      // no-args constructor
//    Mystring larry("Larry");             // overloaded constructor
//    Mystring stooge {larry};            // copy constructor 
//    Mystring stooges;                   // no-args constructor
//    
//    empty = stooge;                     // copy assignment operator
//                                                  // stooge is an l-value
//    
//    empty = "Funny";                    // move assignment operator
//                                                  // "Funny" is an r-value
//    
//    empty.display();
//    larry.display();
//    stooge.display();
//    empty.display();
//    
//    stooges = "Larry, Moe, and Curly";  
//    stooges.display();
//    
//    vector<Mystring> stooges_vec;
//    stooges_vec.push_back("Larry");                // Move constructor
//    stooges_vec.push_back("Moe");                // Move constructor
//    stooges_vec.push_back("Curly");              // Move constructor    
//    
//    cout << "=== Loop 1 ==================" << endl;
//    for (const Mystring &s: stooges_vec) 
//        s.display();
//        
//    cout << "=== Loop 2 ==================" << endl;
//    for (Mystring &s: stooges_vec)
//        s = "Changed";                                      // move assignment
//        
//    cout << "=== Loop 3 ==================" << endl;
//    for (const Mystring &s: stooges_vec) 
//        s.display();
//        
//    
    return 0;
}

