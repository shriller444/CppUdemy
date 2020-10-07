/* Friend
a function / class that has access to private class members
must NOT be a member of class its accesing
*/

/* Function
can be regular non member functions
can be member methods of another class
*/

/* Class
Another class can have access to privaete class members
*/

// potentially violating the encapsulation rules or enhance. 

/*Rules of Freindship in C++
 * 
 * 1) granted NOT taken
 * - declared explicity in class that is granting friendship
 * - declared in function prototype with keyword friend
 * 
 * 2) Friendship is NOT symmetric
 * - must be explicty granted --> if A is a friend of B , B is NOT a friend of A. 
 * 
 * 3) Friendship is not transitive
 * - must be explicity granted
 * - if A is a friend of B AND B is a friend of C then A is NOT a friend of C. 
 * 
 * always has to be granted and essentialy cant be said to be friends just becaue its related or linked to another entity. 
 * 
 * 4) friendship is not inherited 
 */
 
 /*
  * class Player {
  *     friend void displayPlayer(Player &p);
  *     std::string name;
  *     int health;
  *     int xp;
  * public:
  *     ....
  * }
  * void displayPlayer(Player &p){
  *     std::cout << p.name << std::endl; // no need to use getters and setters as its a friend of the class. 
  *     
  * 
  * }
  * // declare the method of another class to be a friend, so in that class you can access private attributes of another class directly. 
  * * class Player {
  *     friend void OtherClass::displayPlayer(Player &p);
  *     std::string name;
  *     int health;
  *     int xp;
  * public:
  *     ....
  * }
  * // entirely seperate class to become a friend so classes can use values from one another
  * * class Player {
  *     friend class OtherClass;
  *     std::string name;
  *     int health;
  *     int xp;
  * public:
  *     ....
  * }
 */
 
#include <iostream>
#include <string>
#include "Player.h"
#include "Other_class.h"
#include "Friend_class.h"

void display_player(Player &p) {
      std::cout << p.name << std::endl;
      std::cout << p.health << std::endl;
      std::cout << p.xp << std::endl; 
}

using namespace std;

int main() {
  
    Player hero{"Hero", 100, 35};
    display_player(hero);
    
    Other_class other;
    other.display_player(hero);
    
    Friend_class friend_class;
    friend_class.set_hero_name(hero,"SUPER HERO");
    friend_class.display_player(hero);
    
    return 0;
}

