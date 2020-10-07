/*

pure virtual fucntions and abstract classes

Abstract class
 - cannot instantiate objects
 - These classes are used as base classes in inheritance hierarchies 
 - Often referred to as Abstract Base Classes. 

 - Too generic for objects to be created from
 - servers as parent to derived classes that may have objects
 - contains at least one pure virtual function. 

 Concrete class
 - used to instantiate objects from 
 - all their member functions are defined
 
 pure virtual function 
 
 - used to make a class abstract
 
 - specified with "=0" in its declaration
 
 - do not provide implementations
 
 - derived classes must override the base class 
 - if the derived class does not override then the derived class is also abstract
 - used when it doesnt make sense for a base class to have an implementaion 
  - concrete classes must implement it. 
  
  - can use pointers and references to dynamically refer to concrete classes derived from them.
  */
  
#include <iostream>
#include <vector>

// cannot instantiate from this abstract class. 
class Shape {			// Abstract Base class
private:
       // attributes common to all shapes
public:
      virtual void draw() = 0;	 // pure virtual function, no implemenation needed 
      virtual void rotate() = 0;   // pure virtual function
      virtual ~Shape() { }
};

class Open_Shape: public Shape {    // Abstract class
public:
    virtual ~Open_Shape() { }
};

class Closed_Shape : public Shape {  // Abstract class
public:
    virtual ~Closed_Shape() { };
};

class Line: public Open_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle: public Closed_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

class Square: public Closed_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};


void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p: shapes) 
        p->draw();
}

int main() {
    //Shape s;
    //Shape *p = new Shape(); // compiler error as you cant instantiate objects from abstract class

    Circle c;
    c.draw(); // static 

    Shape *ptr = new Circle(); // dynamic using base class pointers. 
    ptr->draw();
    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    // a vector of pointers to shape objects
    std::vector<Shape *> shapes {s1,s2,s3};
    
    for (const auto p: shapes){ 
        p->draw();
    }        
    screen_refresh(shapes);
    
    delete s1;
    delete s2;
    delete s3;
    
    return 0;
}

