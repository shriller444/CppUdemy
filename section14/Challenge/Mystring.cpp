#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str; // wipes string value stored in this object to be swapped for rhs
    str = rhs.str;
    rhs.str = nullptr;
    std::cout << "*this: "<< *this << "this: " << this <<std::endl;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator to take in a string as the output
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

//Equality overloaders

bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str) == 0 );
}

bool Mystring::operator!=(const Mystring &rhs) const{
    return(std::strcmp(str,rhs.str) != 0 );
}

bool Mystring::operator<(const Mystring &rhs) const {
    return (std::strcmp(str,rhs.str) < 0); // returns negative values if the lhs parameter is lower lexically
}

bool Mystring::operator>(const Mystring &rhs) const{
    return (std::strcmp(str,rhs.str) < 0);
}

Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str)+1];
    
    std::strcpy(buff, str); // use the c style string copy to move the string into the buffer 
    
    for (size_t i {0}; i < strlen(buff); i++){
        buff[i] = std::toupper(buff[i]);
    }
    
    Mystring temp {buff};
    
    delete [] buff;
    
    return temp;
    
}

// concatenate. 
Mystring Mystring::operator+(const Mystring &rhs){
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1 ];
    
    std::strcpy(buff,str);
    std::strcat(buff, rhs.str);
    
    Mystring temp {buff};
    
    delete [] buff;
    
    return temp;
    

}

Mystring Mystring::operator*(int n){
    Mystring temp;
    
    for (int i{1}; i <= n; i++){ // start from 1 as its a count controlled loop to concatenate the correct number of times. 
        temp = temp + *this; // for n number of times it assigns temp concatenated to to the this.str
    }
    
    return temp; 
    
}

Mystring &Mystring::operator*=(int n){
    *this = *this * n; // uses the  dereferenced value of this which equals the value of string and calls overloaded * then reassigns. 
    return *this;
    
}

Mystring &Mystring::operator +=(const Mystring &rhs){
    *this = *this + (rhs.str); // uses the + concatenation and assigns this back to *this which is the same as saying str. 
    return *this;
}

Mystring &Mystring::operator++(){ // pre-increment
    *this = -*this;
    
    return *this;
}

//post increment assigns the values first then increments after 
Mystring Mystring::operator++(int){ // post increment operator overload 
    Mystring temp (*this); // make a copy of the current object
    operator++(); //call preincrement
    return temp; // return the old value
}

// using friends

// Equality
//bool operator==(const Mystring &lhs, const Mystring &rhs) {
//    return (std::strcmp(lhs.str, rhs.str) == 0);
//}
//
// Not equals
//bool operator!=(const Mystring &lhs, const Mystring &rhs) {
//    return !(std::strcmp(lhs.str, rhs.str) == 0);
//}
//
// Less than
//bool operator<(const Mystring &lhs, const Mystring &rhs) {
//    return (std::strcmp(lhs.str, rhs.str) < 0);
//}
//
// Greater than
//bool operator>(const Mystring &lhs, const Mystring &rhs) {
//    return (std::strcmp(lhs.str, rhs.str) > 0);
//}
//
// Make lowercase
//Mystring operator-(const Mystring &obj) {
//    char *buff = new char[std::strlen(obj.str) + 1];
//    std::strcpy(buff, obj.str);
//    for (size_t i=0; i<std::strlen(buff); i++) 
//        buff[i] = std::tolower(buff[i]);
//    Mystring temp {buff};
//    delete [] buff;
//    return temp;
//}
//
// Concatenation
//Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
//    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
//    std::strcpy(buff, lhs.str);
//    std::strcat(buff, rhs.str);
//    Mystring temp {buff};
//    delete [] buff;
//    return temp;
//}
//
// concat and assign
//Mystring &operator+=( Mystring &lhs, const Mystring &rhs) {
//     lhs =  lhs + rhs;
//     return lhs;
//}
//
// Repeat
// Mystring operator*(const Mystring &lhs, int n)  {
//    Mystring temp;
//    for (int i=1; i<= n; i++)
//        temp = temp + lhs;
//    return temp;
//}
//        
// Repeat and assign
// Mystring &operator*=( Mystring &lhs, int n) {
//        lhs = lhs * n;
//        return lhs;
//}
//
// Make uppercase - pre increment
//Mystring &operator++(Mystring &obj) {
//    for (size_t i=0; i< std::strlen(obj.str); i++)
//        obj.str[i] = std::toupper(obj.str[i]);
//    return obj;
//}
//
// Make uppercase - post-increment
//Mystring operator++(Mystring &obj, int) {
//    Mystring temp {obj};
//    ++obj;       make sure you call the pre-increment!
//    return temp;
//}
