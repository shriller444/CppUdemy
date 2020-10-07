
#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main() { 
    
    // Use the Account class
    cout << "\n=== Account ==================================" << endl;
    Account acc {}; // create account object from base class. 
    acc.deposit(2000.0);               
    acc.withdraw(500.0);
    
    cout << endl;
    
    Account *p_acc {nullptr}; // createa pointer to account object with nullptr initial. 
    p_acc = new Account();
    p_acc->deposit(1000.0); // use -> when there is a pointer of type Account in this class
    p_acc->withdraw(500.0);
    delete p_acc;

// Use the Savings Account class
    
    cout << "\n=== Savings Account ==========================" << endl;
    Savings_Account sav_acc {}; // create a savings account object
    sav_acc.deposit(2000.0);               
    sav_acc.withdraw(500.0);
    
    cout << endl;
    
    Savings_Account *p_sav_acc {nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout << "\n==============================================" << endl;
    return 0;
}

