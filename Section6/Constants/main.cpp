/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main(){
    
    cout << "Welcome to the carpet cleaning service of" << endl;
    cout << "\nEnter the number of rooms: ";
    
    int numberOfRooms {0};
    cin >> numberOfRooms;
    
    const double pricePerRoom {30}; // gives an error if trying to change, read only variable.
    const double salesTax {0.06}; 
    const int estimateExpriry {30}; //Days
    
    /* this shows an example of literal constants that are
    defined within the output statemtent rather than being declared
     */
     
    /*
    cout << "\nEstimate for clean" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per room: \x9C " << 30 << endl;
    cout << "Cost: \x9C " << 30 * numberOfRooms << endl;
    cout << "Tax: \x9C "<< 30 * numberOfRooms * 0.06 << endl;
    cout << "==========================================" << endl;
    cout << "Total estimate: \x9C" << (30 * numberOfRooms) +( 30 * numberOfRooms * 0.06) << endl;
    cout << "The estimate is valid for " << 30 << " days" << endl;
     */
     
     /*
      Refactored code using the constants 
       */
    
    cout << "\nEstimate for clean" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per room: \x9C " << pricePerRoom << endl;
    cout << "Cost: \x9C " << pricePerRoom * numberOfRooms << endl;
    cout << "Tax: \x9C "<< pricePerRoom * numberOfRooms * salesTax << endl;
    cout << "==========================================" << endl;
    cout << "Total estimate: \x9C" << (pricePerRoom * numberOfRooms) +( pricePerRoom * numberOfRooms * salesTax) << endl;
    cout << "The estimate is valid for " << estimateExpriry << " days" << endl;
    
    // this is inefficient as the same calculation has been repeated therefore this can be defined in one line and then use the output in the same area
    
    
    
    return 0;
}
