#include <iostream>

using namespace std;

int main(){
    
    char letterGrade{};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letterGrade;
    
    switch (letterGrade){
        case 'a':
        case 'A':
            cout <<" You need a 90 or above, study hard! " << endl;
            break; // include a break to prevent fallthrough where the other statements are all executed.
        case 'b':
        case 'B': 
            cout << " You need 80-89 for a B, go study " << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-70 for average grade " << endl;
            break;
        case 'd':
        case 'D':
            cout << " dumb " << endl;
            break;
        case 'f':
        case 'F':{
            char confirm {0};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
                cout << "Ok, I guess your a lazy cunt " << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout <<"Ight study then motherfucker" << endl;
            else
                cout << "invalid entry " << endl;
            break;
        }
            cout << " you a dumb motherfuck, jeez" << endl;
            break;
        default:
            cout << "Sorry, not a valid grade " << endl;
    }
    cout << endl;
    return 0;
}