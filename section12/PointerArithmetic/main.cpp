#include <iostream>

using namespace std;

int main(){
    
    int scores[] {100,95, 89, 68, -1};
    
    int *scorePtr {scores};
    
    
    // terminator or sentinel value here is -1 
    while (*scorePtr != -1){
        cout << *scorePtr << endl;
        scorePtr++; // increments the pointer by a bytes size depending on size of this pcs size of integer allocation which I think is 4, maybe 8. 
    }
    
    
    cout << "\n-----------------------" << endl;
    
    scorePtr = scores;
    
    // more efficient than above as it increments and referenes it when outputting. this is because the ++ is after the dereference. 
    while (*scorePtr != -1 ){
        cout << *scorePtr++ << endl;
    }
    
    cout << "\n-------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    // & = address of string object. 
    string *p1 {&s1};		
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		// false, only consider the value of  p1 and p2 , may be the same value whend derefenced but not same memory address
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		// true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true
    
    p3 = &s3;   // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
    

    cout << "\n-------------------------" << endl;
    
    // array with a C style string in , array of characters . 
    char name[]  {"Frank"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2{nullptr};
    
    // stores address of these letters in memory in the two character pointers. 
    char_ptr1 = &name[0];   // F
    char_ptr2 = &name[3];   // n

    // just doest the memory address value of each pointer and subtract to find distance between .
    cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 
    
    cout << endl;
    return 0;
}


