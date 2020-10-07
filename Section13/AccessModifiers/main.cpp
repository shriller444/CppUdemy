#include <iostream>

class Player{
private:
    // attributes
    std::string name {"Player"};
    int health;
    int xp;
public:
    //methods
     void talk(std::string textToSay){
        std::cout << name << " says " << textToSay << std::endl;
    }
    
    bool isDead();
};

int main(){
    
    Player frank;
    //frank.name = "Frank"; // error as its private. 
    //std::cout << frank.health << std::endl; // error as its private.
    
    frank.talk("Hello There");
    return 0;
}