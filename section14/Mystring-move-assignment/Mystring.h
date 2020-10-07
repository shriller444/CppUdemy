#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    
private:
    char *str; // pointer to a char[] holding a c-style string. 
public:
    Mystring(); // No-args style constructor
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source); // Move constructor
    ~Mystring(); // destructor
    
    Mystring &operator=(const Mystring &rhs); // Copy assignment - returns a reference. overloads the '=' if const Mystring reference is used with it.

    Mystring &operator=(Mystring &&rhs); // Move assignment, takes in a reference to R value. 
    int getlength() const;
    void display() const; // const ensures when this is called its not going to affect constness of a value being passed in.
    
    //getters 
  
    const char *getStr() const; 
};

#endif // _MYSTRING_H_
