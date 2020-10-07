#include "Savings_Account.h"

Savings_Account::Savings_Account(double balance, double int_rate)
    : Account(balance), int_rate{int_rate} { // calls the Account class to deal with the balance to slice this class to initialise this section.
        
    }

Savings_Account::Savings_Account() 
    : Savings_Account{0.0, 0.0} { // delegates to the constructor above with these 2 initial values. 
        
    }
    
void Savings_Account::deposit(double amount) {
    amount = amount + (amount * int_rate/100); // new code specific for this classs
    Account::deposit(amount); // passes this new ammount to be finished off with the account class as it doesnt need to be copied.
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    os << "Savings account balance: " << account.balance << " Interest rate: " << account.int_rate;
    return os;
}