/* protected class modifier

- Accessible from the base class itself
- Accessible from classes derived from base
- Not accessible by objects of base or derived 
- essentially private access but when inheritance is involved 

access with public inheritance

base class to derived class can only access public and protected members. 

access with protected inheritance - public members are set to be protected in the derived class. 

private inheritance - sets the members inherited to be private however privates from the base class can still not be used  
*/

#include <iostream>

class Base{
    //Note friend of Base have got access to all

public:
    int a {0};
    void display() {std::cout << a << ", " << b << ", " << c << std::endl;} // member method has got access to all 
protected:
    int b {0};
    
private:
    int c {0};
};

class Derived: public Base{ // derived by public inheritance from Base to make a derived class. 
    //Not friends of derived have access to only what derived has access to
    
    // a = public
    // b = protected
    // c = no access even when derived technically. 
public:
    void accessBaseMembers(){
        a = 100;
        b = 200; // protected means that it can be access from the chain of inheritance. 
        //c = 300; // compiler error
    }
};

int main(){
    std::cout << "===== Base member access from base objects ==========" << std::endl;
    Base base;
    base.a = 100; // ok as public
    //base.b = 200; // no inheritance as of here therefore compiler error. 
    //base.c = 300; // compiler error
    
    std::cout << "===== Base memmber access from derived objects=========" << std::endl;
    Derived d;
    
    d.a = 100; //chill
//    d.b = 200; // compiler error as b is protected from when not being access in the class or inherited classes 
//    d.c = 300; // compiler error. 
    
    return 0;
    
}