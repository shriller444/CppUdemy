#include <iostream>
#include <string>

class Player{
private:
    // private data members
    std::string name;
    int health;
    int xp;

public:

    //public data functions
    // getters for display function. 
    std::string getName() {return name;}
    int getHealth() {return health;}
    int getXp() {return xp;}
    

    // Overloaded constructor with default parameters.

    Player(std::string nameVal = "None" , int healthVal = 0, int xpVal = 0);
  
    //Copy constructor
    Player(const Player &source);
    
    //Destructor
    ~Player(){std::cout << "Destructor called for: " << name << std::endl;}

    
};


Player::Player(std::string nameVal, int healthVal, int xpVal)
    : name{nameVal}, health{healthVal}, xp{xpVal}{
        
    std::cout << "3-args constructor" << std::endl;

}

// expects a constant Copy of the object being copied into the copy constructor as to prevent the original object values from being changed. 
// pass by reference to memory address of object to copy its value directly.
Player::Player(const Player &source)
   // : name{source.name}, health{source.health}, xp{source.xp}{
    : Player {source.name, source.health, source.xp}{ // delegation being used which uses the contructor above on line 33. 
        
        std::cout << "Copy construcctor - made copy of: " << source.name << std::endl;
}

void displayPlayer(Player p){
    std::cout << "Name: " << p.getName() << std::endl;
    std::cout << "Health: " << p.getHealth() << std::endl;
    std::cout << "Xp: " << p.getXp() << std::endl;
    
    // destructor for p called as p goes out of scope after this function is removed from the call stack.
}

int main(){
    
    Player empty {"XXXXXX", 100, 50}; 
    
    Player myNewObject {empty}; // This runs the copy constructor and copies the empty object into the new object here.
    
    displayPlayer(empty); // pass empty by value therefore a copy is used in the displayPlayer function
    
    Player frank {"Frank"}; 
    Player hero {"Hero",100}; 
    Player villain {"Villain", 100, 55}; 
    return 0;
    
}