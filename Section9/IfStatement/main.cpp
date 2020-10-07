#include <iostream>

using namespace std;

int main(){
    
    int num {};
    
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    cout << "IF STATEMENT 1 "<< endl;
    cout << endl;
    if (num >= min){
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff{num - min}; // this is on the local scope of the if block statement therefore the value here will not affect any other diffs present
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    cout << endl;
    cout << "IF STATEMENT 2 "<< endl;
    cout << endl;
    if (num <= max){
        cout << num << " is less than or equal to " << max << endl;
        
        int diff(max - num);
        cout << num << " is " << diff << " less than " << max << endl;
        
    }
    cout << endl;
    cout << "IF STATEMENT 3 "<< endl;
    cout << endl;
    if (num <= max && num >= min){
        cout << num << " is between " << min << " and " << max << endl;
        cout << "This means that statements 1 and 2 have to have displayed " <<  endl;
    } 
    cout << endl;
    cout << "IF STATEMENT 4 "<< endl;
    cout << endl;
    if (num == max || num == min){
        cout << num << " is equal to " << min << " or equal to " << max << endl;
    }
    cout << endl;
    return 0;
}
