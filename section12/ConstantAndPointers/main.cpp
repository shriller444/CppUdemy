#include <iostream>

using namespace std;

int main(){
    
    // pointers to constants 
    int highScore {100};
    int lowScore {65};
    
    const int *scorePtr {&highScore};
    
    //*scorePtr = 86; // Error as its trying to write a new value to where the pointer is pointing to 
    
    scorePtr = &lowScore; // Okay as you can change what the pointer is actually pointing to. 
    
    //constant pointers
    
    int *const scorePtr2 {&highScore};
    
    *scorePtr = 86; // okay as you can change the value that is being pointed to . 
    scorePtr = &lowScore; // Error as you cannot change the address stored in the pointer as its constant. 
    
    
    // constant pointer to constants 
    
    const int *const scorePtr {&highScore};
    
    *scorePtr = 86; // Error as you cant change a value of the constant type. 
    scorePtr = &lowScore; // Error as you cannot change the address stored in the pointer as its constant
    
    cout << endl;
    return 0;
}

