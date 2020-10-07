#include <iostream>

using namespace std;



double a_penny_doubled_everyday(   int, double ammount = 0.01        );



int main() {
    

    double ammount {};
    int days {};
    double total_amount {};

    cin >> ammount;
    cin >> days;
    total_amount = a_penny_doubled_everyday(days, ammount);
    

    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << total_amount;
}



double a_penny_doubled_everyday(int days, double ammount ) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    
 
    if (days == 1){
        return ammount;
    }
    
    return a_penny_doubled_everyday(days-1, ammount * 2);
    
}   
    

