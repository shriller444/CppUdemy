#include <iostream>


usinclTabCtrlg namespace std;

//global variables are automatically set to 0 when declared. 

int age {18}; // Global age delclaration.

int main(){
    
    /* local variable to this function only 
        therefore cannot be used anywhere else in the program
    */
    int age {16};
    
    // local variables overwrite global variables therefore this outputs 16.
    cout << age << endl;
    
    return 0;
}