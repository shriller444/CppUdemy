#include <iostream>
#include <string>


using namespace std;

int main(){
    
    string message {};
    
    cout << "Enter a string to make into a pyramid: ";
    getline(cin, message);
    
    string output {};
    
    for (size_t i {}; i < message.length(); i++){
        
            for (int space{message.length()-i}; space > 0; space--){
                cout << " ";
            }
            for (int number{}; number < (i+1); number++){
                cout <<  message[number];
            }
            for (int start {i-1}; start > -1; start--){
                cout << message[start];
            }          
            cout << endl;
    }
    cout << endl;
    return 0;
}