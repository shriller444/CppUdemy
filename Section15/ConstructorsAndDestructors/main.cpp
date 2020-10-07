/*

- derived inherits from Base
- base part of derived must be initialised before the derived
- when derived object made:
    - base class constructor executes then
    - Derived class constructor executes 
    
    
destructors

- class destructors are invoked in the reverse order of the constructors 

- the derived part of the derived class must be destroyed before the base class destructor is invoked

- when derived object is destroyed 
 - derived class destructor executes then
 - base class destructor executes 
 - Each destructor should free resources allocated in its own constructors 
 
 Constructors and class init 
 
 - derived class does not inherit:
 1) base class constructors
 2) base class destructors
 3) base class overloadeded assignment operators
 4) base class friend functions. 
 
 - base class constructors / destructors and overloaded assignment operators can invoke base class versions. 
 
 - c++ 11 enables xplict inheritance of base 'non special' constructors with:
  - usign base::base; anywhere in the derived class declaration
  - many rules , often best to define constructors yourself --> only inherit certain overloaded constructors if not defined in the inherited class. -
   */
   
#include <iostream>

class Base{
    
private:
    int value;

public:
    Base(): value{0}{std::cout << "Base no args constructor" << std::endl;}
    Base(int x): value{x}{std::cout << "base int overloaded constructor" << std::endl;}
    ~Base(){std::cout << "Base destructor" << std::endl;}
    
};

class Derived: public Base{
    
    // when you use this if an integer is passed to derived it calls the base int overloaded constructor therefore not working as intended. 
    using Base::Base; // inherits non special constructors from the bass class. 
    
private:
    int doubledValue;

public:
    Derived(): doubledValue {0} {std::cout << "Derived no args constructor " << std::endl;}
    Derived(int x): doubledValue {x*2}{std::cout << "Derived int overloaded constructor" << std::endl;}
    ~Derived(){std::cout << "Derived destructror" << std::endl;}
    
};

int main(){
    
    //Base b;
//    Base b{100}; // calls int overloaded constructor and destructor when out of scope. 
    
    //Derived d; // calls base class default constructor before the no args of the derived class
    Derived d {1000}; // compiles as long as the overloaded int constructor is created. 
    
    return 0;
}
 