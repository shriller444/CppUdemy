#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs); // pass in ostream object as reference and the rhs value which is the object to write out
    friend std::istream &operator>>(std::istream &in, Mystring &rhs); // same above but for insertion operator rather than extraction 
    
private:
    char *str; // pointer to a char[] that holds a c style string
public:
    Mystring(); // default no args constructor. 
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source); // Move constructor
    ~Mystring(); // Destructor. 
    
    Mystring &operator=(const Mystring &rhs); // copy assignment
    Mystring &operator=(Mystring &&rhs); // move assignment 
    
    void display() const;
    
    //getters. 
    
    const char *get_str() const;
    

};

#endif // _MYSTRING_H_
