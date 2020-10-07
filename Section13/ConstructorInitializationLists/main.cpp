#include <iostream>
#include <string>

class Player{
private:
    // preset all objects to have this as the string value. 
    // this is order of intilisation no matter what order they are called when the object is being constructed into the init constructor list.
    
    std::string name;
    int health;
    int xp;

public:
    // Overloaded constructors
    Player();
    Player(std::string nameVal);
    Player(std::string nameVal, int healthVal, int xpVal);

    
};

// use scope resolution to access the Player constructor from the Player class. 
// use constructor init lists instead of assigning the values in the body which is properly intilasing the values to the object before its actually created. 

Player::Player()
    : name{"None"}, health{0}, xp{0} {
    
// this --> means the current object being operated on. 
//    name = "None";
//    health = 0;
//    xp = 0;
}

Player::Player(std::string nameVal)
    : name{nameVal}, health{0}, xp{0}{
    
//    name = nameVal;
//    health = 0;
//    xp = 0;
}

Player::Player(std::string nameVal, int healthVal, int xpVal)
    : name{nameVal}, health{healthVal}, xp{xpVal}{
    
    
//    name = nameVal;
//    health = healthVal;
//    xp = xpVal;
}

int main(){
    
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
    
}