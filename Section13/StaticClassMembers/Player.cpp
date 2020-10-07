#include "Player.h"

int Player::num_players {0}; // initialse the static value , often done in the definition of the class. 

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        // increment the number of players made as this is the constructor method when a new object is created
        ++num_players;
}

// copy constructor
Player::Player(const Player &source)
       : Player {source.name, source.health, source.xp}  {
}

Player::~Player() {
    --num_players;
}

int Player::get_num_players() {
    return num_players;
}


