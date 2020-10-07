/*

virtual destructors

- problems occur when polymorphic objects are destroyed 

- if a derived class is destroyed by deleting its storage via a base class pointer and the class has a non virtual destructor 
behaviour is undefined in the C++ standard 

- derived objects must be destroyed in the correct order starting at the correct destructor. 


solution
 - if a class contains virtual functions
 - always provide a public virtual destructor
 - if base class destructor is virtual then all derived class destructors are also virtual. 
*/

#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() { std::cout << "Account:: destructor" << std::endl; } // virtual destructor defined once at the top destructor 
};

class Checking: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() { std::cout << "Checking:: destructor" << std::endl; } // redefined is best practice. 

};

class Savings: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { std::cout << "Savings:: destructor" << std::endl; }

};

class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { std::cout << "Trust:: destructor" << std::endl; }

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
    // frees the correct destructors via the virtual destructors. 
    delete p1;
    delete p2;
    delete p3;
    delete p4;
        
    return 0;
}

