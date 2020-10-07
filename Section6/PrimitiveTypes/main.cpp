#include <iostream>
using namespace std;
int main(){
    /*
     Character Type
      */
    char middleInitial {'J'}; // remember to use the quotes 
    cout << "My Middle intial is " << middleInitial << endl;
    
    /*
     Integer Type
      */
    
//  unsigned short int examScore {55}; // identical to unsigned short 
//  cout << "My exam score was " << examScore << endl;
    
//  int countriesRepresented {65};
//  cout << "There were " << countriesRepresented < " countries represented in my meeting" << endl;
    
    long peopleInFlorida {20610000};
    cout <<  "There are about " << peopleInFlorida << " people in Florida" << endl;
    
    long long peopleOnEarth {7600000000}; // produces an error as it does not fit into the long therefore change to long long
    cout << "There are about " <<  peopleOnEarth << " people on Earth" << endl;
    // if you intialised using = 7.6 billion and long then it would cause an overflow error with a random number
    
    long long distanceToAlphaCenturi {9461000000000};
    cout << "The distance to Alpha Centuri is" << distanceToAlphaCenturi << " kilometers" << endl;
    
    /*
     Floating point types
      */
      
    float carPayment {401.23};
    cout << "My Car Payment is " << carPayment << endl;
    
    double pi {3.1459};
    cout << "Pi is " << pi << endl;
    // use the double as its a larger floating point number
    
    long double largeAmmount {2.7e120};
    cout << "large number is " << largeAmmount << endl;
    
    /*
     Boolean types
    */
    
    bool gameOver {false};
    cout << "The value of game over is " << gameOver << endl;
    
    /*
     overflow example
    */
    
    short value1 {30000};
    short value2 {1000};
    short product {value1 * value2};
    
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    // cant use short therefore must use long as its causing an overflow error. 

    return 0;
    
}
