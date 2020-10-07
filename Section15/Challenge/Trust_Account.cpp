#include "Trust_Account.h"
#include <iostream>
#include <string>

Trust_Account::Trust_Account(std::string name, double balance, double intRate)
    : Savings_Account(name, balance, intRate), withdrawalCount {0} {
        
}

bool Trust_Account::withdraw(double amount){
    if ((withdrawalCount <= withdrawlLimit) && (amount < balance*withdrawlMinPercentage)){
        withdrawalCount++;
        return Savings_Account::withdraw(amount);
    }
    else {
        return false;
    }
}

bool Trust_Account::deposit(double amount){
    
    if (amount >= 5000.00){
        amount += (amount + 50.00);
    }
    return Savings_Account::deposit(amount);
    
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.intRate << "%, withdrawals: " << account.withdrawalCount <<  "]";
    return os;
}




