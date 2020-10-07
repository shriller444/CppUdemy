/*

Copy and Move constructors and overloaded operator= 

- not inherited from base class
- May not need your own
 - compiler one may be adequate
 
- explictly invoke the base class versions from the derived class. 

copy constructor

- can invoke the base copy constructor explcity 
 - derived object 'other' will be sliced - slices out base part of the derived object as this is all that is needed. 
 
- can call derived copy constructor as reference to other and then pass other into the base class for its copy constructor to be used. 

- base copy constructor called from the derived copy constructor of type derived however as derived IS A  base then its allowed. 
 

- if you DO NOT define the copy move constructor or overloaded operator= in derived
 - compiler creates them automatically and call the base class version

- if you DO provide derived versions
 - then YOU must invoke the base version explicity yourself 

- careful with raw pointers
 - especially if base and derived both have raw pointers
 - provide them with the deep copy semantics to copy pointer and data rather then shallow which copys the pointer to the same area. 
 
 */
 
#include <iostream>

class Base{
    
private:
    int value;

public:
    Base()
        : value {0}{
            std::cout << "Base no args copy constructor" << std::endl;
        }
    Base(int x)
        : value {x}{
            std::cout << "Int base constructor" << std::endl;
        }
        
    Base(const Base &other)
        : value {other.value}{
            std::cout << "Base copy constructor " << std::endl;
    }
    
    Base &operator=(const Base &rhs){
        std::cout << "Base operator= " << std::endl;
        if (this == &rhs){
            return *this;
        }

        value = rhs.value;
      
        return *this;
    }
    
    ~Base(){std::cout << "Base destructor " << std::endl;}
};

class Derived: public Base{
    
private:
    int doubledValue;
    
public:
    Derived()
        : Base{}{ // evokes bass class constructor 
            std::cout << "Derived no args constructor " << std::endl;
        }
    
    Derived(int x)
     : Base{x}, doubledValue{x*2}{ // must call base overloaded constructor first 
         std::cout << "Int derived constructor" << std::endl;
     }
     
     Derived(const Derived &other)
        // other is sliced where the values associated with this class are ignored as base class doesnt use them at all therefore doubled value is ignored when passing
        : Base{other}, doubledValue {other.doubledValue}{ // other is a derived but derived is a base therefore this is ifne
            std::cout << "Derived copy constructor" << std::endl;  
        }
    
    Derived &operator=(const Derived &rhs){
        std::cout << "Derived operator" << std::endl;
        if (this == &rhs){
            return *this;
        }
        
        
        // this is required as you have to assign the base part of the object separatedly alongside the derived section.
        Base::operator=(rhs); // rhs is of type derived but IS A base therfore can pass into this , this is slicing as it ignores derived additions.
        doubledValue = rhs.doubledValue;
        return *this;  // returns the object as a reference , this is the pointer to the object , therefore *this is the actual object itself. 
    }
    
    ~Derived(){std::cout << "Derived constructor" << std::endl;}
};

int main(){
//    Base b {100}; // overloaded constructor
//    Base b1 {b}; // copy constructor
//    b = b1; // copy assignment L value
    
    Derived d {100}; // overloaded constructor
    Derived d1 {d}; // copy constructor
    d = d1;   // copy assignment
}