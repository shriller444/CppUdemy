#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    
//    friend Mystring operator-(const Mystring &obj);                                        // make lowercase
//    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);       // concatenate
//    friend bool operator==(const Mystring &lhs, const Mystring &rhs);           // equals
//    friend bool operator!=(const Mystring &lhs, const Mystring &rhs) ;           // not equals
//    friend bool operator<(const Mystring &lhs, const Mystring &rhs) ;            // less than
//    friend bool operator>(const Mystring &lhs, const Mystring &rhs) ;            // greater than
//    friend Mystring &operator+=( Mystring &lhs, const Mystring &rhs);          // s1 += s2;  concat and assign
//    friend Mystring operator*(const Mystring &lhs, int n) ;                               // s1 = s2 * 3;  repeat s2 n times
//    friend Mystring &operator*=( Mystring &lhs, int n);                                   // s1 *= 3;   s1 = s1 * 3;    
//    friend Mystring &operator++(Mystring &obj);                                           // ++s1; pre-increment make uppercase
//    friend Mystring operator++(Mystring &obj, int);                                        // s++; post-increment make uppercase
//    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
//    friend std::istream &operator>>(std::istream &in, Mystring &rhs);


private:
    char *str;      // pointer to a char[] that holds a C-style string
public:

    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    
    Mystring operator-()const; // unary operator to return the lowercase
    
    //equality overloaded
    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs) const;
    bool operator>(const Mystring &rhs)const;
    bool operator<(const Mystring &rhs) const;
    
    Mystring operator+(const Mystring &rhs);
    Mystring &operator+=(const Mystring &rhs); // returns a pointer to the object that rhs was pointing to as this a calculation and assignment in one
    Mystring &operator*=(int n);
    Mystring operator*(int n);
    Mystring &operator++();
    Mystring operator++(int);
    
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_