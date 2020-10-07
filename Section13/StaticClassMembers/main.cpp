// class data members / function can be static. 
// class data members: single data member that belongs to class and not objects
// useful for storing class wide info

// class functions: independent of any objects, called using the class name 

#include <iostream>
#include "Player.h"

using namespace std;

void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl; // calls static method from the function name inherited from Player.h header file
}

int main() {
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    
    {
        Player frank{"Frank"};
        display_active_players();
    }
    // frank object is removed out of the scope therefore the display will decrement after the destructor code is applied. 
    display_active_players();
    
    Player *enemy = new Player("Enemy", 100, 100);
    display_active_players();
    delete enemy;
    display_active_players();    



    return 0;
}

