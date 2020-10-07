#include <iostream>

using namespace std;

int main(){
    
    /* integer division removes the accuracy of the actual value
    int total {};
    int num1{}, num2{}, num3{}; 
    const int count {3};
    cout << "Enter 3 integers seperated by spaces: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    double average {0.0};
    average = total / count;
    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "Sum: " << total << endl;
    cout << "Average: " << average << endl;
    */
    
    // static cast
    
    int total {};
    int num1{}, num2{}, num3{}; 
    
    const int count {3};
    
    cout << "Enter 3 integers seperated by spaces: ";
    
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;
    
    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "Sum: " << total << endl;
    cout << "Average: " << average << endl;
    
    return 0;
    
}