#include <iostream>

// constructor not declared therefore a default one is created which has no args. 
class Player{
    
private:
    std::string name;
    int health;
    int xp;
    
public:
    
    void setName(std::string nameVal){
        name = nameVal;
    }
    
    std::string getName(){
        return name;
    }
    
    //constructor no args
    Player(){
        
        // initialise the values when no args is called to prevent garbage data., this is not really efficient next to constructor initialization lists
        // techinally this is just assignment as the object is made before this occurs.
        name = "None";
        health = 100;
        xp = 3; 
        
    }
    
    // default constructor only provided when no other constructors are provided which is not case here as we did provide one
    Player(std::string nameVal, int healthVal, int xpVal){
        name = nameVal;
        health = healthVal;
        xp = xpVal;
        
    }
    
    
};

int main(){
    
    //Player frank; // doesnt work with no default constructor
    Player hero; // calls no args constructors
    Player frank {"Frank", 100, 13}; // calls the overloaded constructor
    frank.setName("Frank");
    std::cout << frank.getName() << std::endl;
    
    return 0; 
}