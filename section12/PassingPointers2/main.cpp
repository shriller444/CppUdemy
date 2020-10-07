#include <iostream>
#include <string>
#include <vector>

using namespace std;


// swaps 2 integer variables 
void swap(int *a, int *b) {
    
    // dereference the memory addresses to perma swap the 2 values stored in these different pointers. 
    
    // temp stores what a was pointing to which is x = 100 
    int temp = *a;
    
    // 100 stored at where a is pointing is now what b was pointing to which is 200
    *a = *b;
    
    // give what b was pointing to the value of what a was pointing to thus 100
    *b = temp;
}


int main() {
    int x {100}, y {200};
    cout << "\nx: " << x <<  endl; //100
    cout << "y: " << y <<  endl; // 200
    
    swap(&x, &y); // passes the address of the x and y variable to be stored as 2 integer pointers in the swap function. 
    
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    
    cout  << endl;
    return 0;
}

