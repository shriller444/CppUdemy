
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
 
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    cout << "Cleaning service Welcome" << endl;
    
    const int expiryDate {30}; //days
    const double salesTax {0.06}; 
    const double largeRoomPrice {35};
    const double smallRoomPrice {25};
    
    int numberOfSmallRooms {0};
    int numberOfLargeRooms {0};
    
    cout << "How many small rooms: ";
    cin >> numberOfSmallRooms;
    cout << "Number of small rooms: " << numberOfSmallRooms << endl;
    
    cout << "How many larger rooms: ";
    cin >> numberOfLargeRooms;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;
    
    cout << "Price per large room " << largeRoomPrice << endl;
    cout << "Price per small room " << smallRoomPrice << endl;
    
    double cost {(numberOfLargeRooms * largeRoomPrice) + (numberOfSmallRooms * smallRoomPrice)};
    cout << "Cost: \x9C" << cost << endl;
    double tax {cost * salesTax};
    cout << "Tax: \x9C" << tax << endl;
    
    cout << "=================================" << endl;
    cout << "Total estimate: \x9C" << tax + cost << endl;
    cout << "This estimate is valid for " << expiryDate << " days" << endl;
    
    return 0;
    
    
}