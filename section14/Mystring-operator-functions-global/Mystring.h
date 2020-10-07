#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    // making the functions in Mystring.cpp a friend of this class in order to access the private raw pointer str.
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // requires 2 objects of Mystring from left hand side and right hand side. 
private:
    char *str;      // pointer to a char[] that hold a C-style string
public:
    Mystring();
    Mystring(const char *s);
    //copy constructor
    Mystring(const Mystring &source);
    //move constructor
    Mystring( Mystring &&source);
    //destructor
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
   
    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
