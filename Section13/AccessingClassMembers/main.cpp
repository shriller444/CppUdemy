#include <iostream>
#include <string>

class Player{
    
// public ensures all class  values and methods are accesible no matter where you are
public:
    //attributes
    std::string name;
    int health;
    int xp;
    
    //methods
    
    void talk(std::string textToSay){
        std::cout << name << " says " << textToSay << std::endl;
    }
    
    bool isDead();
    
    
};

class Account{
public:
    //attributes
    std::string name;
    double balance;
    
    //methods
    bool deposit(double bal){
        balance += bal;
        std::cout << "In depoist" << std::endl;
    }
    bool withdraw(double bal){
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
    }
    
    
};

int main(){
    Account frankAccount;
    
    frankAccount.name = "Franks Account";
    frankAccount.balance = 5000.0;
    
    frankAccount.deposit(1000.0);
    frankAccount.withdraw(500.0);
    
    Player frank;
    
    
    // if private then a compiler error occurs.
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("balls");
    
    Player *enemy = new Player;
    
    // dereference the Player object pointer and then access the methods. 
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    
    // alternative -> method which doesnt need dot or dereference etc. 
    
    enemy->xp = 15;
    enemy->talk("I will destroy you");
}