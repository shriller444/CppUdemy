#include <iostream>
using namespace std;


int main() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    bool has_car {0};
    int age {0};
    cout << boolalpha;
    cout << "do u has car: ";
    cin >> has_car;
  
    cout << endl;
    cout << "age : ";
    cin >> age;
  
    if (age >= 16){
        if (has_car == true){
            cout << "Yes - you can drive!";
        }
        else{
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    } else {
        int diff {16 - age};
        cout << "Sorry, come back in " << diff << " years and be sure you own a care when you come back.";
    }
    return 0;
}
    
    
    
    