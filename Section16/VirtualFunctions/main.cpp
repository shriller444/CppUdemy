/*

Virtual functions
 - redefined functions are bound statically
 - overriden functions are bound dynamically
 - virtual functions are overriden 
 - allows us to treat objects generally as objects of the Base class. 
 
 - when declaring a function as virtual from derived class the dynamic polymorphic technique is only able to be done
 - via a pointer or reference to the specific class

- use virtual in Base class to a function to allow the binding to occur at run time to each of the derived classes. 
- virtual from top to bottom.

declaring virtual function

- override the function in the derived classes
- function signature and return type must match exactly
- virtual keyword not required but is best practice
- if you do not provide an overriden version it is inherited from its base class. 

*/

#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
};

class Checking: public Account  {
public:
    virtual void withdraw(double amount) { // dont actually need to redefine the virtual keyword. useful so the user can tell which functions are virtually inherited. 
        std::cout << "In Checking::withdraw" << std::endl;
    }
};

class Savings: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
};

class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
};

int main() {
    std::cout << "\n === Pointers ==== " << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    

    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
        
    return 0;
}
