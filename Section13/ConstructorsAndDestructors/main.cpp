#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    void set_name(std::string name_val) { 
        name = name_val; 
    }
    // Overloaded Constructors set values intially when an object is created. 
    
    // no initilisation 
    
    // called when the types in the parameters are selected when making object thus they are said to be overloaded.
    Player() { 
        cout << "No args constructor called"<< endl;
    }
    
    Player(std::string name) { 
        cout << "String arg constructor called"<< endl;
    }
    
    
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called"<< endl; 
    }
    
    // destructor method called when the object created is destroyed for the specified name of the object 
    ~Player() { 
        cout << "Destructor called for " << name << endl; 
    }
};

int main() {

    // when slayer goes out of the block created its deleted as its no longer needed thus calling a destructor. 
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank; // no args constructor called. 
        frank.set_name("Frank");
        Player hero("Hero"); // string constructor method called 
        hero.set_name("Hero");
        Player villain("Villain", 100, 12); // string health and xp constructor called 
        villain.set_name("Villain");
    }
    
    
    Player *enemy = new Player; // calls no arg constructor 
    enemy->set_name("Enemy"); // calls string constructor method 
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
    
    return 0;
}