/*

Polymorphism
 - compile time / early binding / static binding
 - run time / late binding / dynamic binding
 
 Runtime PolyMorphism
 
- being able to assign different meanings to the same functions at run time

Allows program to become more abstract
- general vs specific, e.g. printing no matter what is passed in just print rather than print this vector or that string whatever. 
- allow C++ to work out the correct function 

not the standard in c++ , run time polymorphism is achieved via:
 - inheritance
 - base class pointers or references
 - virtual functions.

run time uses function overriding. 

static binding is the standard we use in inheritance, where different objects created from different sections of the hierarchy use the same
name of method but that method is different within each section of the hierarchy as it becomes more specialised.
 
static binding will call base class if a pointer of tpye base class is making a derived class object in the heap.

dynamic binding uses virtual methods to obtain run time polymorphism - instead of at compile time it binds the correct method to 
when an object is actually assigned. 
*/

#include <iostream>
#include <memory> // smart pointers
// BINDING STATICALLY.  
class Base{
    
public:
    void sayHello() const{
        std::cout << "Hello - I'm base class object " << std::endl;
    }
};


class Derived: public Base{

public:
    void sayHello() const{
        std::cout << "Hello - I'm a derived object " << std::endl;
    }
};

void greetings(const Base &obj){
    std::cout << "Greetings: ";
    obj.sayHello();
}

int main(){
    Base b;
    b.sayHello(); // calls the Base class method
    
    Derived d;
    d.sayHello(); // calls the Derived class method
    
    greetings(b); // b is a Base
    greetings(d); // d is a Base therefore this calls the Base method as obj is a reference to a base when passing to greeetings. 
    
    Base *ptr = new Derived(); // ptr holds address of Base objects of which derived is a Base. 
    ptr->sayHello(); // no dynamic polymorhpism therefore only thinks of it as a pointer to Base therefore calls Base class say hello. 
    
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>(); 
    ptr1->sayHello(); // even using dynamic pointers the Base class is still derived
    
    
    return 0;
}