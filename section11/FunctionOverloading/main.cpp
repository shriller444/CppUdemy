#include <iostream>
#include <string>
#include <vector>

using namespace std;


// function overloading uses the correct function depending on the parameter data types that are passed in 

void print(int);
void print(double=125.5);
void print(string);
void print(string, string );
void print(vector<string>);
void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: " ;
    for (auto s: v )
        cout << s + " ";
    cout << endl;
}

int main() {
    
    print(); // default argument goes to  100 , if a default value is found it uses that one , if there are 2 defautl arguments then it can cause ambiguity error. 
    print(100);    // int
    print('A');     //  character is always promoted to int should print 65 ASCII ('A')
    
    print(123.5);   // double
    print(123.3F);  // Float is promoted to double as there is no function that can take a  float , use F to define it as a less precise value.
    
    print("C-style string");  // C-style string is converted to a C++ string as it does not match the string data type 
    
    string s {"C++ string"};    
    print(s);       // C++ string
    
    print("C-style string", s); // First argument is converted to a C++ string
    
    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    cout << endl;
    return 0;
}
