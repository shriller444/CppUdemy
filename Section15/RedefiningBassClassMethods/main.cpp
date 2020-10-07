/*

using and redefining base class methods

- derived class can directly invoke base class methods

- derived clas can override or redefine base class methods 

- very powerful for next section on polymorphism. 

- prevent need to copy code when redefining methods by evoking a method call from the derived class directly
to the base class using Baseclass::method(parameters) 

static binding of method calls

- Binding of which methods to use is done at the time of compilation
 - default binding for c++ is static
 - derived class objects will use Derived::deposit (method and class used as example) 
 - But --> can explcity invoke Base::deposit from Derived::deposit
 - OK, but limited - more powerful approach is dynamic binding which is in next section 
 
 - we may want binding to occur at run time. 
  * 
  */

#include <iostream>
#include "Savings_Account.h"

using namespace std;


int main() {
    cout << "\n===== Account class ===================" << endl;
    Account a1 {1000.0};
    cout << a1 << endl;         // Account balance: 1000
    
    a1.deposit(500.0);
    cout << a1 << endl;         // Account balance: 1500
    
    a1.withdraw(1000);            // Account balance: 500
    cout << a1 << endl;
    
    a1.withdraw(5000.0);         // Insufficient funds
    cout << a1 << endl;         // Account balance: 500

 cout << "\n===== Savings Account class ===========" << endl;
    Savings_Account s1 {1000, 5.0}; 
    cout << s1 << endl;         // Savings Account balance: 1000, Interest rate: 5
    
    s1.deposit(1000);
    cout << s1 << endl;          // Savings Account balance: 2050, Interest rate: 5
    
    s1.withdraw(2000);
    cout << s1 << endl;          // Savings Account balance: 50, Interest rate: 5
    
    s1.withdraw(1000);            // Insufficient funds
    cout << s1 << endl;         // Savings Account balance: 50, Interest rate: 5
    
    
    return 0;
}




 
 