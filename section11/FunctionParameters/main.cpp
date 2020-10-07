#include <iostream>
#include <string>
#include <vector>

using namespace std;


//default is pass by value  in c++ where the actual value passed in is not changed outside of the local scope of the function 

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v );

void pass_by_value1(int num){
    num = 1000;
}

void pass_by_value2(string s){
    s = "Changed";
}

void pass_by_value3(vector<string> v){
    v.clear(); // delete all elements in the vector 
    
}

void print_vector(vector<string> v){
    for (auto s: v){
        cout << s << " ";
    }
    
    cout << endl;
}

int main(){
    int num {10};
    int anotherNum{20};
    
    // passing by value, not reference to the memory location 
    
    cout << "num before calling pass_by_value1: " << num << endl; 
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nanotherNum before being called by pass_by_value1: " << anotherNum << endl;
    pass_by_value1(anotherNum);
    cout << "\nanotherNum before after called by pass_by_value1: " << anotherNum << endl;
    
    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    
    pass_by_value3(stooges);
    
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
    
}