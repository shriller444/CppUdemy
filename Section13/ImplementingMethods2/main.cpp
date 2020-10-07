#include <iostream>
#include "Account.h" // include the header file where the method declaration are defined 

int main(){
    
    Account frankAccount;
    // use methods as you cant access private attributes directly. 
    frankAccount.setName("Franks account");
    frankAccount.setBalance(1000.0);
    
    if (frankAccount.deposit(200.0)){
        std::cout << "Deposit Ok" << std::endl;
    }
    else{
        std::cout << "Deposit not allowed" << std::endl;
    }
    
    if (frankAccount.withdraw(500.0)){
        std::cout << "Withdrawl Ok" << std::endl; 
    }
    else{
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    if (frankAccount.withdraw(1500.0)){
        std::cout << "Withdraw Ok" << std::endl;
        
    }
    else{
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    
    return 0;
    
}