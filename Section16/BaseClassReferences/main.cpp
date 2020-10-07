/*

base class references 

- we can also use base class references with dynamic polymorphism

- useful when we pass objects to functions that expect a base class reference. 

*/


#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next video
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {  }
};

class Checking: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {  }
};

class Savings: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {  }
};

class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {  }
};

void do_withdraw(Account &account, double amount) { // passes in an Account type reference 
    account.withdraw(amount);
}

int main() {

    Account a;
    Account &ref = a; // create a reference that is initialised to a
    ref.withdraw(1000);		    // In Account::withdraw, ref can access what a's object methods are dynamically 

    Trust t;
    Account &ref1 = t; // creates an account reference that is set to a trust account therefore will work dynamically with methods. 
    ref1.withdraw(1000);        // In Trust::withdraw

   Account a1;
   Savings a2;
   Checking a3;
   Trust a4;
   
   do_withdraw(a1, 1000);       // In Account::withdraw
   do_withdraw(a2, 2000);       // In Savings::withdraw
   do_withdraw(a3, 3000);       // In Checking::withdraw
   do_withdraw(a4,  4000);      // In Trust::withdraw


    return 0;
}
