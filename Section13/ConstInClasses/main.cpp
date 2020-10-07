// const in classes can be used to prevent attributes of objects from being altered by member functions. 
// produces an error for any method accessing the constant object even if this does not actually alter the values. 

// tell methods that are going to be constant so compiler doesnt produce an error.

// enables const - correctness.

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
    //always use const like this for methods which do not change any values. 
    std::string get_name() const  {         // consty method ensures it doesnt produce an error when a constant object is passed in
        // can not change any attributes here. 
        return name;
    }
    void set_name(std::string name_val)   {
        name = name_val;
    }
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

// defining the overloaded constructors outside of the class using scope resolution operator. often seperated in other files. 
Player::Player() 
    : Player {"None",0,0} {
}

Player::Player(std::string name_val) 
   : Player {name_val,0, 0}  {
}
  
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
}

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

int main() {
    
    const Player villain {"Villain", 100, 55};    
    Player hero {"Hero", 100, 15};
    
   // villain.set_name("Super villain"); // should not be allowed as set_name does change a value therefore not a const corrrect
    cout << villain.get_name() << endl; // without const after prototype for get_name this throws error. 
    cout << hero.get_name() << endl;   // works fine as hero is not const next to villain. 
    
    display_player_name(villain); // get_name doesnt work again as it may affect the constant nature without the constant after prototype. 
    display_player_name(hero); // works as hero is const next to villain being const. 

    
  
    return 0;
}


