#include <iostream>

using namespace std;

int main(){
    
    int *intPtr {nullptr};
    
    // no name defined, only accessed via pointer, if pointer cant be found then a 'memory leak' occurs.
    intPtr = new int;
    
    cout << intPtr << endl;
    
    delete intPtr; // frees up the storage in the heap
    
    size_t size{0};
    
    double *tempPtr{nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    
    tempPtr = new double[size]; // allocates the first address of array of doubles of size size to tempPtr variable to be accessed from
    
    cout << tempPtr << endl;
    
    // memory leak occurs when you assign the pointer to a new value without deleting meaning its impossible to be accessed.
    delete [] tempPtr; // use this for freeing up array heap space. 
    
    cout << endl;
    return 0;
}