/*
 
class level exceptions

Method
 - These work the same way as they do for functions as we have seen 

Constructor
 - Constructors may fail
 - Constructors do not return any value
 - Throw an exception in the construtor if you cannot initialise an object 
 - allocating memory , but cant
 - opening invalid file
  
Destructor
 - do NOT throw exceptions from your destructor - marked as noexcept default
*/

#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"

using namespace std;

int main() {
    try {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", -10.0); // throws an exception therefore in the try block
        std::cout << *moes_account << std::endl;
    }
    catch (const IllegalBalanceException &ex) //catch the checking account object by reference 
    {
        std::cerr << "Couldn't create account - negative balance" << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}



