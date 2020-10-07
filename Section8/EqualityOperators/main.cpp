#include <iostream>

using namespace std;

int main(){
    
    bool equalResult {false};
    bool notEqualResult {false};
    
    int num1{}, num2{};
    
    cout << boolalpha; //sets boolean to displaying true and false rather than 1 and 0 
    
    
    cout << "Enter 2 integers seperated by a space: ";
    
    cin >> num1 >> num2; 
    
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;

        
    char char1{}, char2{};
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equalResult = (char1 == char2);
    notEqualResult = (char1 != char2);
    cout << "Comparision result (equals) : " << equalResult << endl;
    cout << "Comparision result (not equals) : " << notEqualResult << endl;
    
    
    // doubles with a very small precision difference can sometimes be the same value such as 12 and 11.9999999999999999999999999999999
    double double1{}, double2{};
    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
     equalResult = (double1 == double2);
    notEqualResult = (double1 != double2);
    cout << "Comparision result (equals) : " << equalResult << endl;
    cout << "Comparision result (not equals) : " << notEqualResult << endl;

    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equalResult = (num1 == double1);
    notEqualResult = (num1 != double1);
    cout << "Comparision result (equals) : " << equalResult << endl;
    cout << "Comparision result (not equals) : " << notEqualResult << endl;hf



    return 0;
}