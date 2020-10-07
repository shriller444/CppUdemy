#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account); // used to put accounts a stream 
private:
    // these are constants avaible only to this classes scope , this is used for new accounts
    // could define outside but dont want to pollute the global namesapce. 
    static constexpr const char *defName = "Unnamed Account";
    static constexpr double defBalance = 0.0;
protected:
    std::string name;
    double balance;
public:
    // constructor for creating accounts with initial arguments
    Account(std::string name = defName, double balance = defBalance);
    // Account(std::string name = "Unamed Account", double balance =0.0);
    bool deposit(double amount);
    bool withdraw(double amount);
    

};

#endif // _ACCOUNT_H_
