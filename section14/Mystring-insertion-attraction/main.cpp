// stream and insertion operators << >> 

// doesnt make sense to implement as member methods
//    left operand must be a user-defined class
//    not the way we normally use these operators for these 
//
//     object name << cout; - unconventional 

#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;
    
    cout << "Enter the third stooge's first name: ";
    cin >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly;
    
    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
    
    return 0;
}

