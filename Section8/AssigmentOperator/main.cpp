#include <iostream>

using namespace std;

int main(){
    /* L - value is the location in memory of a variable
    R - value is the value at that location
    */
    
    int num1 {10};
    int num2 {20};
    
    // alters the R-value at L-value num1.
    num1 = num2; 
    
    // can chain the integers to the same value/
    num1 = num2 = 1000;
    
    //if num1 was const int this would give a read only variable error. 
    num1 = 100;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    cout << endl;
    
    return 0;
}