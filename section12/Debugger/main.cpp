
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int i{5};
    while (i>0) {
        cout << i << endl;
        i--;
    }
    
    int x {100}, y {200};
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    cout  << endl;
    return 0;
}

/*
Press Debugger and run as debugger instead of build 

click on the black side next to any line to make a breakpoint - debug stops where the breakpoint is to analyse the contents.

debug.layout setting shows the layout of how you want to debug. 

make sure you have a breakpoint for debugging. 
*/