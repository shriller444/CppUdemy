#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
    //cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    int result {0};
    
    result = num1 + num2;
    
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    result = num1 - num2;
    
    cout << num1 << " - " << num2 << " = " << result << endl;
       
    result = num1 * num2;
    
    cout << num1 << " * " << num2 << " = " << result << endl;
       
    result = num1 / num2;
    
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    // expect 0.5 but as its all integers . its chopped after the dot therefore outputs 0.
    result = num2 / num1;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    // modulo operator, does the calculation and outputs the remainder

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    num1 = 10;
    num2 = 3; 
    
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    //order of precedence is BIDMAS equivalent. 
    
    result = num1 * 10 + num2;
    
    /* putting them in a double form assigns them as literals with double form
    therefore will now perform the correct calculator
    */
    cout << 5/10 << endl;
    cout << 5.0/10.0 << endl;
    
    cout << endl;
    
}
