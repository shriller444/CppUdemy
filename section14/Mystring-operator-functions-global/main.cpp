
// instead of using member functions to access this pointer we use global functions

// access private attributes by declaring a friend function to access the values.

//unary single parameter, 2 for binary as there is no more this pointer to refer to LHS object. 

#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    
    Mystring larry {"Larry"};
    larry.display();                                        // Larry
    
    larry = -larry;
    larry.display();                                        // larry
    
    cout << boolalpha << endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;
    
    cout << (larry == moe) << endl;             // false
    cout << (larry == stooge) << endl;          // true
        
  //  Mystring stooges = larry + "Moe";   
    Mystring stooges = "Larry" + moe;           // Now OK with non-member function as it can take things that are not Mystring objects and still work .
    stooges.display();                                      // LarryMoe
    
    Mystring two_stooges = moe + " " + "Larry";     
    two_stooges.display();                               // Moe Larry
    Mystring three_stooges = moe + " " + larry + " " +  "Curly";
    three_stooges.display();                            // Moe larry Curly             

    return 0;
}

