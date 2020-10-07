// create a copy of pointer to data 
// Each copy will have a pointer to a unique storage location in the heap
// Deep copy when there is a raw pointer as a class data member
// when copy goes out of scope its unique storage is deleted and does not interfere with original source object

// use when there is a raw pointer as one of the class data members

#include <iostream>

class Deep{

private:


    // contains raw pointer therefore must implement deep copy
    int *data;

public:
    void setDataValue(int d) {*data = d;}
    
    int getDataValue() {return *data;}
    
    //Constructor
    Deep(int d);
    //Copy Constructor
    Deep(const Deep &source);
    //Destructor
    ~Deep();

    
};

Deep::Deep(int d){
    // dynamic allocation of the data on the heap for the new data to be stored
    data = new int;
    *data = d; 
}

// works as it passes in type Deep therfore Deep must be set to a new object value . 

Deep::Deep(const Deep &source)
    : Deep {*source.data} { // uses delegating constructor above where it assings a new heap value the data at this location,
                            // meaning its a different area of the heap with same value
        std::cout << "Copy - constructor - deep copy" << std::endl;
}

Deep::~Deep(){
    // free up heap storage for where the data values are being used after the object has been destroyed. 
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_deep(Deep s){
    std::cout << s.getDataValue() << std::endl;
    // s goes out of scope after this is called thus running the destructor 
}
int main() {
    
    Deep obj1 {100};
    display_deep(obj1); // object 1 still points to valid data after this as the destructor of temp s value does not affect that memory location in the heap.
    

    Deep obj2 {obj1};
   
    
    obj2.setDataValue(1000); // only sets ob2 to be 1000 and not object1 as they are differnt memory locations in the heap
    
    return 0;
}



