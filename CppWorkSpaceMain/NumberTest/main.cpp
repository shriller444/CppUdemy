#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  string input;
  int number, number2, number3, x;
  cout << "Enter something and i shall print it out for you" << endl;
  cin >> input;
  cout << input << endl;
  cin >> number >> number2 >> number3; 
  x = number + number2 + number3;
  cout << x << endl;
  getchar();
}
    