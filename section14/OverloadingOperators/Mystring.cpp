#include <cstring>
#include <iostream>
#include "Mystring.h"

// no args constructor - sets the str pointer to a space of 1 character using the heap. 
Mystring::Mystring()
    : str(nullptr){ // initialise the string to nullptr as default
    
    str = new char[1]; // allocate to heap a new char of size 1. 
    
    *str = '\0'; // defaults as the terminator
    
    
}

//overloaded constructor


Mystring::Mystring(const char *s) // expects a c-style string. 
    : str (nullptr){
        
    
    if (s == nullptr){ // if they tried to create an object with nullptr passed in then create an empty string and store the terminator
        str = new char[1];
        *str = '\0';
    }
    else{
        str = new char[std::strlen(s)+1]; // otherwise create new storage on the heap of size of the string + extra character for the terminator value
        std::strcpy(str,s); // store the string passed in to point to the new heap storage. 
    }
        
}

//Copy constructor - called when an existing object is passed in and needs to make a copy. 
Mystring::Mystring(const Mystring &source) // source is the object passed in
    : str (nullptr){
    str = new char [std::strlen(source.str) + 1]; // creates new heap storage with source object length + 1 to create a unique area for deep copy
    std::strcpy(str, source.str); // copy the values to this area. 
        
}

//Destructor
Mystring::~Mystring(){
    delete [] str; // deletes char from heap.
}

//display method
void Mystring::display() const{
    std::cout << str << " : " << getlength() << std::endl;
}

//length getter
int Mystring::getlength() const {return std::strlen(str);}

//string getter - returns const char pointer 
const char *Mystring::getStr() const {return str;}




