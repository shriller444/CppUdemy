#include <iostream>

using namespace std;

int main(){
 
    
    int cents {0};
    int dollars {0};
    int quarter {0};
    int dime {0};
    int nickel {0};
    int penny {0};
    
    cout << "Enter the number of cents: ";
    cin >> cents;
    
   // dollars = cents / 100;
   // cents -= dollars * 100;
   // quarter = cents / 25;
   // cents -= quarter * 25;
   // dime = cents/ 10;
   // cents -= dime * 10;
   // nickel = cents / 5;
   // cents -= nickel * 5;
   // penny = cents/1;
    
   // cout << dollars<< endl;
   // cout << dime << endl;
    //cout<< nickel<< endl;
    //cout << penny<< endl;
    
    //92
    
    dollars = cents / 100;
    cents = cents % 100;

    quarter = cents / 25;
    cents = cents % 25;
    
    dime = cents/ 10;
    cents = cents % 10;
    nickel = cents / 5;
    cents = cents % 5;
    penny = cents/1;
    
    cout << dollars<< endl;
    cout<< quarter<< endl;
    cout << dime << endl;
    cout<< nickel<< endl;
    cout << penny<< endl;
    
    
    return 0;
}