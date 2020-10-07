#include <iostream>

using namespace std;

int main(){
    //infinite for loop
    for (;;)
        cout << "This prints forever " << endl;
        
    //infinite while loop
    
    while (true){
        cout << "This prints forever " << endl;
    }
        
    while (true){
        char again{};
        cout << "Do you wanna loop again: ";
        cin >> again;
        
        if (again == 'N' || again == "n")
            break;
    }
    
}