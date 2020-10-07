#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} { // can use try statement for initialiser list. 
        if (balance < 0.0) // if negative balance throw an object of this class. 
            throw IllegalBalanceException{};
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

 void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << name << ": " << balance << "]";
}
