#include <iostream>
#include <vector> // this must be used as vectors are a seperate file of methods

using namespace std; 

int main() {
    
    //vector <char> vowels; // empty vectors
    // vector <char> vowels (5); // 5 values in the vector are all set to 0 
    vector <char> vowels {'a','e','i','o','u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    //vector <int> testScores (3); // 3 elements are set to 0
    // vector <int> testScores (3,100); // 3 elements are set to 100
    vector <int> testScores {100,98,89};
    
    cout << "\nTest scores using array syntax: " << endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;
    
    cout << "\nTest scores using vector syntax: " << endl;
    
    /* .at / .size / .push_backat
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    
    // .size in vector class returns vector size like len() in python.
    cout << "\nThere are " << testScores.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 test scores: " ;
    cin >> testScores.at(0);
    cin >> testScores.at(1);
    cin >> testScores.at(2);
    
    cout << "\nUpdated test scores: " << endl;
    
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    
    cout << "\nEnter a test score to add to the vector: ";
    
    int scoreToAdd {0};
    cin >> scoreToAdd;
    
    testScores.push_back(scoreToAdd);
    
    cout << "\nEnter one more test score to add to the vector: ";
    
    cin >> scoreToAdd;
    
    testScores.push_back(scoreToAdd);
    
    cout << "\nTest scores are now: " << endl; 
    
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;
    
    cout << "\nThere are now " << testScores.size() << " scores in this vector" << endl;
     */
    
    // exception caused by attempting to locate item not within the range of the vector
    cout << "This should cause an exception" << testScores.at(10);
    
    /*2D vector example
    
    vector <vector<int>> movieRatings{
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
     cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    cout << endl;
    return 0;
     */
}