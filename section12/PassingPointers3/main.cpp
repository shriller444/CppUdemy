#include <iostream>
#include <string>
#include <vector>

using namespace std;


// use const vector from being changed and a constant pointer to prevent both the pointer cant change and the value the pointer is pointing to cant change. 
void display( const vector<string> *const  v) {
//  (*v).at(0) = "Funny";

    // get the value of the vector being pointed to by dereference
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
  
 //   v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
        
        // while its not reached - 1, then dereference and print then increment the pointer to next section of the array. 
        cout << *array++ << " ";
    cout << endl;
}

int main() {

    cout << "-----------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
   
    cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);
    
    cout  << endl;
    return 0;
}

