#include <iostream>
#include <cstdlib> // needed for rand ()
#include <ctime> // needed for time ()

using namespace std;

int main(){
    
    int random_number {};
    
    size_t count {10}; // number of random numbers to generate 
    
    int min {1}; // lower bound, inclusive
    int max {6}; // upper bound, inclusive 
    
    // seed the random number generator 
    // if there is no seed then its the same sequence of random numbers for every single run
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time (nullptr)); // use the time as its always different therefore a good seed. 
    
    for (size_t i{1}; i <= count; i++){
        
        random_number = rand() % max + min; // generate a random number [min, max]
        cout << random_number << endl;
    }
    
    cout << endl;
    return 0;
}