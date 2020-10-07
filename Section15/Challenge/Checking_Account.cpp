#include "Checking_Account.h"
#include <iostream>
#include <string>

Checking_Account::Checking_Account(std::string name, double balance)
    : Account(name, balance){
        
}

bool Checking_Account::withdraw(double amount){
    amount += withdrawlFee;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance  << "]";
    return os;
}

