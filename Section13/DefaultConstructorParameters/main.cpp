#include <iostream>
#include <string>

class Player{
private:
    
    std::string name;
    int health;
    int xp;

public:

    // Overloaded constructor with default parameters.
    
    
    Player(std::string nameVal = "None" , int healthVal = 0, int xpVal = 0);
    //Player(){}; // compiler error as its ambiguos as it doesnt know which player to call. 

    
};


Player::Player(std::string nameVal, int healthVal, int xpVal)
    : name{nameVal}, health{healthVal}, xp{xpVal}{
        
    std::cout << "3-args constructor" << std::endl;
    
    

}

int main(){
    
    Player empty; // no information has been applied therefore its set to the default parameters defined in the 
    Player frank {"Frank"}; // Frank overwrites default none 
    Player hero {"Hero",100}; // defaults the name and health value. 
    Player villain {"Villain", 100, 55}; // all defaults overwritten 
    
    return 0;
    
}