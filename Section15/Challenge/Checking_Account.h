#ifndef _CHECKING_H_
#define _CHECKING_H_
#include "Account.h"
#include <string>

class Checking_Account: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *defName = "Unnamed checking account";
    static constexpr double defBalance = 0.0;
    static constexpr double withdrawlFee = 1.50;
    
protected:
    std::string name;
    double balance;
public:
    Checking_Account(std::string name = defName , double balance = defBalance);
    bool withdraw(double amount);
    // inherits deposit
    

};

#endif // _CHECKING_H_
