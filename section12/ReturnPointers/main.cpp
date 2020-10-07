#include <iostream>

using namespace std;


int *create_array(size_t size, int initValue = 0 ){
    int *newStorage {nullptr};
    
    // the pointer address is a fresh heap store of integer array size size. 
    // if this pointer is lost then there is a memory leak as you cant access the memory that has been allocated. 
    newStorage = new int[size];
    
    // cycle through each of the integers depending on the size and dereference while incrementing and set each value to the desired initial value. 
    for (size_t i{0}; i < size; i++){
        *(newStorage + i) = initValue;
    }
    
    // return the newStorage pointers which points to the new dynamic array that has been creataed in the heap store. 
    return newStorage; 
}


// is passed a pointer to an array that cant have the pointer or the array variable changed due to the constant nature. 
void display(const int *const array, size_t size){
    for (size_t i{0}; i < size; i++){
        
        // array is a memory address and you can this notation for indexing the correct memory element, pointer subscript rather than offset notation as above. 
        cout << array[i] << " ";
    }
    cout << endl; 
}

int main(){
    int *myArray {nullptr};
    
    size_t size; 
    
    int initValue {};
    
    cout << "How many integers to allocate? ";
    cin >> size;
    
    cout << "What value to set them all to: ";
    cin >> initValue;
    
    myArray = create_array(size, initValue);
    cout << "\n-----------------------------------" << endl;
    
    display(myArray, size);
    
    // clear the heap storage space after it has been finished in its use, this it what makes it dynamic as its created when you need it and never fills up memory. 
    delete [] myArray;
    
    return 0; 
}