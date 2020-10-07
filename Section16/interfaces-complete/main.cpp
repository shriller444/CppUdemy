#include <iostream>

//print interface
class I_Printable { // creates an abstract class for printable things 
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0; // pure virtual  function 
    virtual ~I_Printable() {};
};

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os); // print the object of base i printable, this uses dynamic polymorphism due to the virtual functions of print.
    return os;
}


class Account : public I_Printable { // account is a derivation of printable
public:
    virtual void withdraw(double amount) { // virtual withdarw function that does not relate to printable
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(std::ostream &os) const override { // overrides print function of the i printable base function 
        os << "Account display"; // set each print display to make sense for the sub class. 
    }
    virtual ~Account() {  }
};

class Checking: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
     virtual void print(std::ostream &os) const override {
        os << "Checking display";
    }
    virtual ~Checking() {  }
};


class Savings: public Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
     virtual void print(std::ostream &os) const override {
        os << "Savings display";
    }
    virtual ~Savings() {  }
};

class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
     virtual void print(std::ostream &os) const override {
        os << "Trust display";
    }
    virtual ~Trust() {  }
};

class Dog : public I_Printable {
public:
  virtual void print(std::ostream &os) const override {
        os << "Woof woof"; // Dog can now use print interface
    } 
};

void print(const I_Printable &obj) {
    std::cout << obj << std::endl;
}


int main() {
    
    Dog *dog = new Dog(); // create dog object and put into the stream using the print interface
    std::cout << *dog<< std::endl;  
    
    print(*dog); // create a print function taking in i printable objects and use the output stream to print the reference to objects to print them
    
    Account *p1 = new Account();
    std::cout << *p1<< std::endl;
        
    Account *p2 = new Checking();
    std::cout << *p2<< std::endl;  

//    Account a;
//    std::cout << a<< std::endl;
//    
//    Checking c;
//    std::cout << c << std::endl;
//
//    Savings s;
//    std::cout << s << std::endl;
//    
//    Trust t;
//    std::cout << t << std::endl;
        
    delete p1;
    delete p2;
    delete dog;
    return 0;
}