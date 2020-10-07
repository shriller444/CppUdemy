// compiler may make temp unamed values
// occurs with objects too
// eg total = 100+ 200 --> 100+200 = 300, 300 stored in temp unamed value. then moved to total and thus discarded 
// Move semantics addresses R values. 

// Move Constructors move the object rather than copy. 

// copy elision - C++ optimises copying away completely RVO return value optimization , prevents a temp to store the return variable 

/*R value referecnces 
 * used in moving semantics and perfect forwarding
 * Move semantics always about r value references
 * Used by move constructor and move assignemnt operator to efficiently MOVE objects rather than COPY them. 
 * R value reference operator = '&&'
 * 
 * L value reference to a certain value such as x can be altered by using no & . 
 * int x{100};
 * int &Lref = x;
 * Lref = 10; ---> change x to equal 10. 
 * 
 * if passing by reference in a function and you give an R value it will generate a compiler error , as it must be addressable etc. 
 * to pass R values it must be double & , vice versa it crashes on passing a L value. 
 * 
 * these functions can be overloaded to use L and R values for making move constructor. 
 */
 
/*Move constructors
 * 
 * Instead of making a deep copy of the move constructor:
 * move the resource 
 * Simply copies the address of the resource from source to current object
 * nulls out the pointer in the source pointer. 
 * NO COPYING just changing pointers.
 * 
 * steal data and set pointer to null basically. 
 */ 
 
 
#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
    int *data;
public:

    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; } 
 
    // Constructor
    Move(int d);
    // Copy Constructor
    Move(const Move &source); // deep copy constructor
    // Move Constructor
    Move(Move &&source) noexcept;
    // Destructor
    ~Move();
};

// after making temp value here a move constructor is called or a copy if there is no move constructor. 
Move::Move(int d)  {
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

// Copy constructor, called after creating tempory value from default constructor therefore must be called to copy
Move::Move(const Move &source)
    : Move (*source.data) { // goes back to delegating constructor above to create a new deep copy
        cout << "Copy constructor  - deep copy for: " << *data << endl;
}

//Move constructor that is the same as copy but insteads expects a R value of type Move. 
// this is used as an overload to original copy if an R value is supplied rather than L.
// no const as nullptr must be changed 
Move::Move(Move &&source) noexcept 
    : data {source.data} { // copies source data which is a direct reference to the R value passed in of type Move, rather than creating new memory space from a new value
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
    // if data not equal to nullptr then you just output what you are destroying 
    // tells us if we are destroying objects that we have just moved. 
    if (data != nullptr) {
        cout << "Destructor freeing data for: " << *data << endl;
    } else {
        // otherwise just say you are destroying the nullptr object.
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}

int main() {
    vector<Move> vec;

    // creates a tempory object therefore a R value to be used to copy / move to the vector
    
    // performs far too many deep copies as there are lots of copies in the background as the vector grows in size
    
    // if no Move constructor made then this calls the copy constructor for deep copying and takes it in as a cosnstant L value. 
    
    // no variable name therefore R value meaning a temp object
    
    // this temp value is destroyed after its been as a copy constructor
    vec.push_back(Move(10));

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});

    // essentially a temp value is passed in and therefore after using the default constructor to set space for it it calls a move rather than copy
    // this steals the data of the source object and resets the pointer to point to nothing thus a hollow object which is discarded off without needing
    // to copy this object. 

    return 0;
}

