#include <iostream>
#include <string>

class Player{
private:
    
    std::string name;
    int health;
    int xp;

public:
    // Overloaded constructors
    Player();
    Player(std::string nameVal);
    Player(std::string nameVal, int healthVal, int xpVal);

    
};

// call Player with the correct values to overload to give third constructor which is a link in the chain.
Player::Player()
    : Player{"None", 0, 0} {
        
    std::cout << "No-args constructor" << std::endl;

}

Player::Player(std::string nameVal)
    : Player{nameVal, 0, 0} {
        
    std::cout << "1-args constructor" << std::endl;
    

}

// this is the delegating constructor as the other constructors use this to generate the initial values for the object being created from them
// making it more efficent
Player::Player(std::string nameVal, int healthVal, int xpVal)
    : name{nameVal}, health{healthVal}, xp{xpVal}{
        
    std::cout << "3-args constructor" << std::endl;
    
    

}

int main(){
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
    
}