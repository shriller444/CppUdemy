#include <iostream>

using namespace std;

int main() {
    
    int num {};
    
    cout << "Enter an integer: " ;
    
    cin >> num;
    
    if (num % 2 ==0)
        cout << num << " is even " << endl;
    else
        cout << num << " is odd " << endl;
    
    // if the expression in the brackets before ? is true then it takes the  first option otherwise it displays the option after the colon.
    cout << num << " is " << ((num % 2 == 0 ) ? "even" : "odd") << endl;
    
    int num1{}, num2{};
    
    cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    
    if (num1 != num2){
        cout << "Largest : " << ((num1 > num2) ? num1:num2) << endl;
        cout << "Smallest : " << ((num1 < num2) ? num1:num2) << endl;
        
    }
    else {
        cout << "The numbers are the same" << endl;
    }
    
    
    cout << endl;
    return 0;
}