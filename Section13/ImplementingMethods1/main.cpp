#include <iostream>
#include <string>

class Account{
    
private:
    // attributes
    std::string name;
    double balance;
    
public:
    //methods
    //declared inline
    
    void setBalance(double bal){balance = bal;}
    double getBalance(){return balance;}
    
    //methods will be declared outside the class declaration 
    void setName (std::string n);
    std::string getName();
    
    //method prottypes
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

// member methods using scope resolution operator. 
// member have access to private attributes. 
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

int main(){
    Account frankAccount;
    // use methods as you cant access private attributes directly. 
    frankAccount.setName("Franks account");
    frankAccount.setName(1000.0)
    
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
    
}