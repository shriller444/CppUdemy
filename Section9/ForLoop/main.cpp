#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    for (int i{1}; i <=10; i++)
        cout << i << endl;
    
    for (int i{1}; i <=10 ; i +=2)
        cout << i << endl;
    
    for (int i{10}; i > 0 ; --i)
        cout << i << endl;
        cout << "Balls " << endl; // this is not part of the for loop misleading error
        
    for (int i{10}; i<= 100; i+=10)
        if (i % 15 == 0){
            cout << i << endl;
        }
    
    // use the comma operator in order to increment 2 variables alongisde each other and initialise them both of course. 
    for (int i{1} , j{5}; i<=5; ++i, ++j)
        cout << i << " + " << j << " = " << (i+j) << endl;
        
    //makes a grid of 10 x 10 where every 10th number a new line is created using the modulo operator. 
    for (int i{1}; i<=100; i++){
        if (i < 10)
            cout <<  i << " ";
        else
            cout << i;
        if (i % 10 == 0) 
            cout << endl;
        else
            cout << " ";
            
    }
        
    //same as grid using conditional operator
    
    // uses conditional operators to decide if spaces are requred between the characters in order to maintain the correct format. 
    std::cout << "adgfs"<< std::endl;
    
    for (int i{1}; i <= 100; i++){
        cout  << i << ((i<10) ? " ":"" ) <<((i % 10 == 0) ? "\n" : " ");
    }
    
    
    vector <int> nums {10,20,30,40,50};
    
    // integer should techincally be classed as unsigned as the size variable of a vector is always > 0
    for (unsigned int i{0}; i < nums.size(); i++)
        cout << nums[i] << endl;
        
        
    
    cout << endl;
    return 0;
}