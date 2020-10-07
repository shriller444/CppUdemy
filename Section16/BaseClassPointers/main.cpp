/*

using base class pointer

for dynamic polymorphism we must have:
 - inheritance
 - Base class pointer or Base class reference 
 - Virtual functions 
  */
#include <iostream>
#include <vector>

// uses virtual functions in order to allow run time polymorphism.
class Account{
public:
    virtual void withdraw(double amount){
        std::cout << "In Account::withdraw" << std::endl;
    }
    
    virtual ~Account(){}
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

int main() {
    std::cout << "\n === Pointers ==== " << std::endl;
    // create a pointer to the Account type of each of the inherited types of Account. 
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    // calls withdraw for each one which calls seprate methods depending on the object using run time polymorphism with virtual functions. 
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    // creates an array of pointers to accounts for each account object 
    std::cout << "\n === Array ==== " << std::endl;
    Account *array [] = {p1,p2,p3,p4};
    for (auto i=0; i<4; ++i)
        // uses each of the correct withdraw methods 
        array[i]->withdraw(1000);
        

    // creates a vector of pointers to accounts 
    std::cout << "\n === Vector ==== " << std::endl;
    std::vector<Account *> accounts {p1,p2,p3,p4};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
        
    std::cout << "\n === Vector ==== " << std::endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);

    std::cout << "\n === Clean up ==== " << std::endl;
    // clear the pointers on the heap as they are not needed anymore. 
    delete p1;
    delete p2;
    delete p3;
    delete p4;
        
    return 0;
}