/*

override specifier

- we can override Base class virtual functions
- The function signature and return must be EXACTLY the same
- If they are different then we have redefintion NOT overriding
- Redefinition is statically bound
- Overriding is dynamically bound 
- C++ 11 provided an override specifier to have the compiler ensure overriding. 

 * BASICALLY CHECKS IF YOU FUCK UP A FUNCTION THAT IS SUPPOSED TO BE POLYMORPHIC WHEN INHERITING.
 */
 
#include <iostream>

class Base {
public:
    virtual void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
    virtual ~Base() {}
};

class Derived: public Base {
public:
    virtual void say_hello() const override {   // override produces a compiler error if the virtual function here does not match the original function signature
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
    virtual ~Derived() {}
};


int main() {
    
    Base *p1 = new Base();      // Base::say_hello()
    p1->say_hello();
    
    // Derived pointer to Derived calls the correct function 
    Derived *p2 = new Derived();    // Derived::say_hello()
    p2->say_hello();
    
    // if we had not overriden this would output the base say hello as the virtual function is different signature. 
    Base *p3 = new Derived();   //  Base::say_hello()   ?????   I wanted Derived::say_hello()
    p3->say_hello();
    
   
    return 0;
}

