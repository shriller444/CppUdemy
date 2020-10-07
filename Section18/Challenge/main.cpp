#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    std::unique_ptr<Account> ptr = make_unique<Savings_Account>("Jake", -40); // negative balance exception 
    
    ptr->withdraw(10000000000); //insufficent funds exception 
    
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
    
}

