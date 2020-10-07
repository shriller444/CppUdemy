//Section 5
// Basic I/O using cin and cout

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string balls;
    
    cout << endl << "enter valls: ";
    getline(cin, balls);
    
    while(cin.fail()){
        cout << "ttt" << endl;
    }
/*
    cout << "Hello World!" << endl;
    
    cout << "World" << endl;
    
    // these must be the same output
    cout << "Hello World!" << endl;
    cout << "Hello" << "world!" << endl;
    cout << "Hello" << "world!\n";
  
    // new line forced in the line
    cout << "Hello\nOut\nThere\n";
     */

    int num1;
    int num2;
    double num3; //floating point
    
    // whitespace ignored when an integer is entered into the cin
    
    /*
    cout << "Enter an Integer";
    cin >> num1;
    cout << "You Entered " << num1 << endl;
     */
    
    
    /* 
    entering 2 numbers to num1 will fuck up the second one and run the last cout 
    the first number is noticed from the whitespace after it, other integer read from same 
    input stream therefore this is automatically noticed as num2. 
      
    */
    
    /*
    cout << "Enter a first integer:";
    cin >> num1; 
    
    cout << "Enter a second integer: ";
    cin >> num2;
    
    cout << "You entered " << num1 << " and " << num2 << endl;
     */
    
    // can chain extraction operator as with output stream. 
    
    /*
    cout << "Enter 2 integers seperated with a space: "; 
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;
     */
    
    // entering a floating point double number
    
    /*
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "You entered: " << num3 << endl;
     */
    
    // double use
    
    /*
    cout << "Enter an integer: ";
    cin >> num1;
    
    cout << "Enter a double: ";
    cin >> num3;
    
    cout << "The integer is: " << num1 << endl;
    cout << "And the double is " << num3 << endl;
     */
    

    return 0; 
    
}