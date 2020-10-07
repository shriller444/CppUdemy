/*

what is using a class an interface

 - an abstract class has only pure virtual functions
 - they provide a general set of services to the user of the class provided as public
 - Each subclass is free to implement each of these services as required 
 - Every service / method must be implemented. 
 - service type information is strictly enforced. 
 
 
 printable example
 
 - c++ does not provide true interfaces 
 
 - use abstract classes and pure virtual functions to achieve this
 
 - suppose you want to be able to provide printable support for any object we wish without knowing the implemenation at compile time_t
 
 std::cout << any object << std::endl;
  - any object must conform to the printable interface 
   */
   
#include <iostream>

class Account  {
    friend std::ostream &operator<<(std::ostream &os, const Account &acc); // expects output stream and account object by reference 
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {  }
};

std::ostream &operator<<(std::ostream &os, const Account &acc) { // account class implemenation
    os << "Account display";
    return os;
}

class Checking: public Account  {
    friend std::ostream &operator<<(std::ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {  }
};

std::ostream &operator<<(std::ostream &os, const Checking &acc) { // another implemenation as friend functions are not inherited therefore must be redefined for the checking account.
    os << "Checking display";
    return os;
}

class Savings: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {  }
};

std::ostream &operator<<(std::ostream &os, const Savings &acc) {
    os << "Savings display";
    return os;
}
class Trust: public Account  {
    friend std::ostream &operator<<(std::ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {  }
};

std::ostream &operator<<(std::ostream &os, const Trust &acc) {
    os << "Trust display";
    return os;
}

int main() {
    Account *p1 = new Account(); // account display 
    std::cout << *p1<< std::endl;

    Account *p2 = new Checking(); // account display as no virtual functions for operator << overloaded.
    std::cout << *p2<< std::endl;
   
//    Account a;
//    std::cout << a<< std::endl;
//    
//    Checking c;
//    std::cout << c << std::endl;
//
//    Savings s;
//    std::cout << s << std::endl;
//    
//    Trust t;
//    std::cout << t << std::endl;

    delete p1;  
    delete p2;
    return 0;
}

  
  
  