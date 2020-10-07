#ifndef _TRUST_H_
#define _TRUST_H_
#include <string>
#include <iostream>
#include "Savings_Account.h"
class Trust_Account: public Savings_Account{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
private:
// these are for the entire class not each object and are the same always 
    static constexpr const char *defName = "Unnamed Trust account";
    static constexpr double defBalance = 0.0;
    static constexpr double defIntRate = 0.0;
    static constexpr int withdrawlLimit = 3;
    static constexpr double withdrawalMinBonus = 5000.0;
    static constexpr double bonus = 50.0;
    static constexpr double withdrawlMinPercentage = 0.2;
protected:
    int withdrawalCount;
public:
    Trust_Account(std::string name = defName , double balance = defBalance, double intRate = defIntRate);
    bool withdraw(double amount);
    bool deposit(double amount);


};

#endif // _TRUST_H_
