#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
class Account{

    friend std::ostream &operator<<(std::ostream &os, const Account &account); // enables account object to be placed on a stream for easy display 
protected:
    double balance;
public:
    Account(); // no args constructor
    Account(double balance); // int overloaded constructor 
    void deposit(double ammount);
    void withdraw(double ammount);

};

#endif // _ACCOUNT_H_
