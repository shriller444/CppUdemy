#include <iostream>

using namespace std;

int main() {
    
    /* array size is determined by the number of initial elements in the list. 
       which in this case is 5
     */
    char vowels [] {'a','e','i','o','u'};
    
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "\nThe last vowel is: " << vowels[4] << endl;
    
    //cin >> vowels[345435]; // this can fuck up the program as its out of bounds
    
    double hiTemps [] {90.1, 89.8, 77.5, 81.6};
    
    cout << "\nThe first temperature is: " << hiTemps[0] << endl;
    
    hiTemps[0] = 100.7; // set first index to this value of 100.7
    
    cout << "The first temperature is now: " << hiTemps[0] << endl;
    
    // no declaration of variables therefore random junk can be displayed, add {0} to set each space to value of 0. 
    int test_scores [5] {0};
    
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    cout << "\nEnter 5 test scores: ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
   

    // the variable name of the address is a value of a memory location therefore this will output a value in hex. 
    cout << "\nNotice what the value of the array name is : " << test_scores << endl;

    cout << endl;
    return 0;
}
