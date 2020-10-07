#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
//header file with a blockguard to prevent duplication on compile. like a class inherit for python

//specification for class
class Account{
    
private:
    // attributes
    std::string name;
    double balance;
    
public:
    //methods
    //declared inline
    
    void setBalance(double bal){balance = bal;}
    double getBalance(){return balance;}
    
    //methods will be declared outside the class declaration 
    void setName(std::string n);
    std::string getName();
    
    //method prottypes
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

#endif // _ACCOUNT_H_
