#include "Savings_Account.h"
#include <iostream>
#include <string>
Savings_Account::Savings_Account(std::string name, double balance, double intRate)
    : Account {name, balance}, intRate {intRate}{ // takes care of account section using name and balance. 
        
}

bool Savings_Account::deposit(double amount){
    amount += amount * (intRate/100);
    return Account::deposit(amount); // account class finishes it off. this returns true or false also therefore this requires to be a bool return type.
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
    
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.intRate << "%]";
    
    return os;
}

//no withdraw due to inheritance. 