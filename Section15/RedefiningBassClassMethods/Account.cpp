#include "Account.h"
// Simple Account class
#include <iostream>
Account::Account() 
    : Account(0.0) {    // delegating constructor called as it calls the constructor below to set this value. 
}
        
Account::Account(double balance)
    : balance(balance) { 
}
            
void Account::deposit(double amount) {   
    balance += amount;
}
    
void Account::withdraw(double amount) {
    if (balance-amount >= 0)
        balance-=amount;
    else    
        std::cout << "Insufficient funds" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os <<  "Account balance: " << account.balance;
    return os;
}
