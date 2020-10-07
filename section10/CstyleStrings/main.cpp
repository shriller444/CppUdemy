#include <iostream>
#include <cstring> // c style string functions
#include <cctype> // for character based functions

using namespace std;

int main(){
    
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    char temp[50] {};
    
    cout << firstName;
    
    cout << "Enter first name : "; 
    cin >> firstName;
    
    cout << "Enter last name: ";
    cin >> lastName;
    cout << "-----------------------" << endl;
    
    cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " characters" << endl;
    cout << "and your last name, " << lastName << " has " << strlen(lastName) << " characters" << endl;
    
    strcpy(fullName, firstName); // Copy firstName to fullName
    strcat(fullName, " ");       // concatenate fullName and a space
    strcat(fullName, lastName);  // concatenate lastName to fullName
    
    cout << "Your full name is " << fullName << endl;
    
    cout << "-----------------------" << endl;
    cout << "Enter your full name: ";
    cin >> fullName;
    
    cout << "Your full name is " << fullName << endl;
    
    cout << "Enter your full name: ";
    cin.getline(fullName, 50); // read the characters up to 50 which is the maximum number of characters that can be read, reads the fullname for this
    cout << "Your full name is " << fullName << endl;
    
    cout << "-----------------------------------" << endl;
    
    strcpy(temp, fullName);
    
    if (strcmp(temp, fullName) == 0 ){ // this compares if they are the same string , odd but it compares to 0 
        cout << temp << " and " << fullName << " are the same " << endl;
    }
    else{
        cout << temp << " and " << fullName << " are different " << endl;
    }
    
    cout << "-----------------------------------" << endl;
    
    for (size_t i{0}; i < strlen(fullName); i++ ){ // size t is is used to represent an integer of unsigned type therefore holds size values as in this example 
        if (isalpha(fullName[i])){
            fullName[i] = toupper(fullName[i]);
        }
    }
    
    cout << "Full Name: " << fullName << endl;
    
     if (strcmp(temp, fullName) == 0 ){ // this compares if they are the same string , odd but it compares to 0 
        cout << temp << " and " << fullName << " are the same " << endl;
    }
    else{
        cout << temp << " and " << fullName << " are different " << endl;
    }
    
    
    //strcmp outputs 0 , negative or positive depending on the larger value in the comparison. 
    // if left is larger then outputs -1 , vice versa . lexically before and after.
    
    cout << "-------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " <<  fullName <<  ": " << strcmp(temp, fullName) << endl;
    cout << "Result of comparing " << fullName << " and " <<  temp <<  ": " << strcmp(fullName, temp) << endl;

    cout  << endl;
    return 0; 
    
    
}