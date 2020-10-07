/*

passing args to base class constructor

- base part of derived class must be initialised first

- we can invoke whichever base class constructor we wish in the initisaltion list of the derived class. 

*/

#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base() : value {0}  { 
            cout << "Base no-args constructor" << endl; 
    }
    Base(int x)  : value {x} { 
            cout << "Base (int) overloaded constructor" << endl;
    }
   ~Base() { 
       cout << "Base destructor" << endl;
    }
};

class Derived : public Base {
private:
    int doubled_value;
public:
// have control of which base class constructors are called depending on the derived constructo object creation.
    Derived()
        :Base {}, doubled_value {0} { // initialses base values before initialsing attributes of this class when an object is made. 
            cout << "Derived no-args constructor " << endl; 
    }
    Derived(int x) 
        :  Base{x},  doubled_value {x * 2} {  // calls the base class int overloaded constructor in the init list then the value is set. 
            cout << "Derived (int) constructor" << endl; 
    }
    ~Derived() { 
        cout << "Derived destructor " << endl; 
    } 
};

int main() {
   //  Derived d;
   Derived d {1000};
   
   return 0;
}