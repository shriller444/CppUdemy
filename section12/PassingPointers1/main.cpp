#include <iostream>

using namespace std;


void double_data(int *int_ptr) {
   *int_ptr *= 2;	
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl; //10
    double_data(&value); // passes the address of the value integer as the pointer to the function of double data
    cout << "Value: " << value << endl; //20 

    cout << "-----------------------------" << endl;
    
    // set the pointer to be the address of the value
    int_ptr = &value;
    
    // use this pointer to double the value again using the function
    double_data(int_ptr);
    cout << "Value: " << value << endl;//40

    cout  << endl;
    return 0;
}