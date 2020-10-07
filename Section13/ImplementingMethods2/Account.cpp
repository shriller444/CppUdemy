#include "Account.h"

// methods file for modularity 
//implementation

void Account::setName(std::string n){
    name = n; 
}

std::string Account::getName(){
    return name;
}

bool Account::deposit(double amount){
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if (balance-amount >= 0 ){
        balance -= amount;
        return true; 
        
    }
    else {
        return false;
    }
}