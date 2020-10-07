#include <iostream>
#include <vector>
#include <string>

using namespace std;


void printNumbers(const vector<int> myList);
void addNumber(vector<int> &myList, int number);
int calculateMean(const vector<int> myList);
int smallestLargestNumber(const vector<int> myList, char type);

void printNumbers(const vector<int> mylist){
    if (mylist.size() != 0){
                cout << "{";
                 for (auto val: mylist){
                    cout << val << " ";
                 }
                 cout << "}";
            cout << endl;
            }
            else {
                cout << "No Numbers have been added to the list, motherfucker there aint nothing to print" << endl;
            }
}



void addNumber(vector<int> &myList, int number){
    bool added {false};
            
    for (auto val: myList){
        
        if (val == number){
            added = true;
        }
    }
            
    if (!added){
        myList.push_back(number);
        cout << number << " has been added to the list. There are now " << myList.size() << " numbers present " << endl;
    }
    
    
    else{
        cout << number << " Cannot be added as its a duplicate " << endl;
    }
}

int calculateMean(const vector<int> myList){
        double total {};
        for (auto val: myList){
            total += val;
        }
        // useful for making the outcome of a integer division a double i guess. 
        return static_cast<double>(total) / myList.size(); 
}

int smallestLargestNumber(const vector<int> myList, char type){
    int number {myList[0]};
    
    for (auto val: myList){
        if (type == 'S'){
            if (val < number)
                number = val;
            
        }
        else{
            if (val > number)
                number = val;
            
        }
    }
        
    return number; 
}




int main(){
    static vector <int> myList {};
    char selection {};
    
    cout << "-------------------" << endl;
    cout << "P - Print Numbers " << endl;
    cout << "A - Add a Numbers " << endl;
    cout << "M - Display a mean of the numbers " << endl;
    cout << "S - Display the smallest number " << endl;
    cout << "O - Display the occurences of a certain number " << endl;
    cout << "C - Clear the list of numbers " << endl;
    cout << "L - Display the largest number " << endl;
    cout << "Q - Quit " << endl; 
    cout << "-------------------" << endl;
    cout << "Enter Choice: ";
        
    cin >> selection;
    
    if (toupper(selection) == 'P'){
        printNumbers(myList);
    }
    
    else if (toupper(selection) == 'A'){
        int number {};
        cout << "Number to add: ";
        cin >> number;
        addNumber(myList, number);
    }
    
    else if (toupper(selection) == 'M'){
        if (myList.size() == 0){
            cout << "No data to calculate a mean" << endl;
        }
        else{
            cout << "The mean of the numbers in the list is: " << calculateMean(myList) << endl;
        }
    }
    
    else if (toupper(selection) == 'S' ||  toupper(selection) == 'L' ){
        int number {};
        string variable = "";
        
        if (toupper(selection) == 'S' ){
            number = smallestLargestNumber(myList, 'S');
            variable = "smallest";
        }
        else{
            number = smallestLargestNumber(myList, 'L');
            variable = "largest";
        }
        
        cout << variable << " Number in the list: " << number << endl;
        
    }
    
    
    if (!(toupper(selection) == 'Q')){
        main();
    }
}