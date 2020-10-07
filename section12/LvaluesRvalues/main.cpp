#include <iostream>

using namespace std;

int main(){
    
    /* L-values 
     - values that have names aand are addressable
     - modifiable if they are not constant
     
    int x {100}; // x is an l-value
    x = 1000;
    x = 1000 + 20; 
    
    string name; // name is an l-value
    name = "Frank";
     
    100 = x;  // 100 is NOT an l-value
    (1000+20) = x; // 1000+20, not an l-value
    
    string name;
    name = "Frank";
    "Frank" = name; // "Frank" is NOT an l-value. 
     */
     
     /* R-values (non addressable / non assignable)
      - a value thats not an l-value
      - always on RHS of an assignment expression
      - literal
      - temporary and non intended to be non modifiable
    
      int x {100};     // 100 is an r-value
      int y = x + 200; // (x+200) is an r-value 
    
      string name;
      name = "Frank"; // "Frank" is an r- value 
    
      int maxNum = max(20,30); // max(20,30) is an r-value
    
     - r-values can be assigned to l-values explicity
    
     int x {100};
     int y {0};
    
     y = 100; // r value 100 assigned to l-value y. 
     x = x + y; // r-value (x+y) assigned to l-value x 
      */
      
    /* L-value References
     
        - The references we have used are l-lalue reference as they reference l-values. 
        
        int x {100};
         
        int &ref1 = x;  // ref1 is a reference to l-value
        ref1 = 1000; 
        
        int &ref2 = 100; // Error 100 is an r-value 
        
        - the same you pass-by reference 
        
        int square (int &n){
            return n*n;
        }
        
        int num {10};
        
        square(num); // OK as num is an l-value 
        
        square(5);  // Error cant pass 5 in as reference as its an r -value 
         */
}