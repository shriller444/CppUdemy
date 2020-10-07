#include <iostream>

using namespace std;

int main(){
    enum Direction{
        left , right , up, down
    };
    
    Direction heading {left}; // this defines the word to start the enumeration from
    
    switch (heading){
        
        case left:
            cout << "Going Left" << endl;
            break; // without break, if case left is matched it will also run case right up to that ones break
        case right:
            cout <<"Going right" << endl; 
            break;
        case up:
            cout <<"Going up" << endl;
            break;
        case down:
            cout <<"Going down" << endl;
            break;
        default:
            cout << "balls" << endl;
    }
    cout << endl;
    return 0;
}