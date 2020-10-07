/* default copy constructor
 * Each data member is copied from the source object
 * pointer is copied and NOT what it was pointing to = SHALLOW COPY
 * problem --> when storage is released in the destructor, the other object refers the released storage. 
 */
 
#include <iostream>

class Shallow{

private:
    int *data;

public:
    void setDataValue(int d) {*data = d;}
    
    int getDataValue() {return *data;}
    
    //Constructor
    Shallow(int d);
    //Copy Constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();

    
};

Shallow::Shallow(int d){
    // dynamic allocation of the data on the heap for the new data to be stored
    data = new int;
    *data = d; 
}

// this is shallow as only a copy of source object is passed in. 
// same address they are pointing to each object which can cause issues when dynamic memory released for original object when shallow. 
Shallow::Shallow(const Shallow &source)
    : data(source.data) {
        std::cout << "Copy - constructor - shallow copy" << std::endl;
}

Shallow::~Shallow(){
    // free up heap storage for where the data values are being used after the object has been destroyed. 
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_shallow(Shallow s){
    std::cout << s.getDataValue() << std::endl;
    // s goes out of scope after this is called thus running the destructor 
}
int main() {
    
    Shallow obj1 {100};
    display_shallow(obj1); // passes object in as type Shallow which calls the copy constructor 
    
    // create obj2 based on a copy of object 1 so they point to the same value in the heap 
    Shallow obj2 {obj1};
   
    // this changes obj1 value to 1000 as they are both pointing to the same location in memory as obj2 was created as a copy from obj1.
    obj2.setDataValue(1000);
    
    return 0;
}


