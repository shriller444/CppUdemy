#include <iostream>
#include <string>
#include <vector>


class Player{
    // attributes
    std::string name {"Player"};
    int health {0};
    int xp {3};
    
    // methods
   
    void talk(std::string);
    bool is_dead();

  
};

class Account{
    
    //attributes
    std::string name {"Account"};
    double balance {0.0};
    
    //methods
    
    bool deposit(double);
    bool withdraw(double);
    
};

int main(){
    
    Account frankAccount;
    Account jimAccount;
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero}; // array of type Player. which is our class
    
    std::vector<Player> playerVec {frank};
    playerVec.push_back(hero);
    
    Player *enemy {nullptr};
    
    enemy = new Player;
    
    delete enemy;
    
    return 0;
}