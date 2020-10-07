#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    
    int scores[] {10,20,30};
    
    // auto leaves it to the compiler to define data type.
    for (auto score: scores)
        cout << score << endl;
        
    vector <double> temperatures {82.3, 34.3, 24.3};
    double averageTemp {};
    double total {};
    
    for (auto temp: temperatures)
        total += temp;
    
    if (temperatures.size() != 0 )
        averageTemp = total / temperatures.size();
    
    //  1 decimal place output 
    cout << fixed << setprecision(1);
    cout << "Average temperature is " << averageTemp << endl;
    
    for (auto val: {1,2,3,4,5})
        cout << val << endl;
    
    //c style string for loop
    for (auto c: "This is a test"){
        // check for spaces and ignore them.
        if (c != ' ')
            cout << c;
        if (c == ' ' )
            cout << "\t";
        // this prints a tab at every space 
    }
    cout << endl;
    return 0;
}