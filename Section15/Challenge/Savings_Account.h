#ifndef _SAVINGS_H_
#define _SAVINGS_H_
#include <iostream>
#include "Account.h"

class Savings_Account: public Account {
    
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

private:

    static constexpr const char *defName = "Unnamed savings account";
    static constexpr double defBalance = 0.0;
    static constexpr double defIntRate = 0.0;

protected:
    double intRate;
public:
    Savings_Account(std::string name = defName, double balance = defBalance, double intRate = defIntRate);
    bool deposit(double amount);
    // inherits the Account::withdraw methods. 

};

#endif // _SAVINGS_H_
