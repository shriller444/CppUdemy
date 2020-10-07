#include <iostream>

using namespace std;

/* Dont use this operator more than once for the same variable
 * prefix = before operand, ++operand
 * postfix = after operand operand ++
 */
 
int main(){
    
    int counter {10};
    int result {0};
    
    // Example 1 - simple increment
    
    cout << "Counter: " << counter << endl;
    
    counter = counter + 1; 
    
    cout << "Counter: " << counter << endl;
    
    // use the increment operator in post/pre form which adds 1 to the value held at that location 
    counter++;
    
    cout << "Counter: " << counter << endl;
    
    ++counter;
    
    cout << "Counter: " << counter << endl;
    
    // Example 2 - preincrement 
    
    counter = 10;
    result = 0; 
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter; //Note preincrement, means that before the counter is used it will be incremented
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl; 
    
    //Example 3 - postincrement
    
    counter = 10;
    result = 0; 
    
    cout << "Counter: " << counter << endl;
    
    result = counter++; //Note post increment, uses the counter before its increment then increment after
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl; 
    
    //Example 4 
    
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = ++counter + 10; //preincrement counter, then add to result alongisde adding the 10 to make 21 overall. 
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl; 
    
    //Example 5 
    
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    result = counter++ + 10; //add counter to the result alongside 10 and then after that you increment counter to become 11
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl; 
    
    
    
    
     
     
    
    
}