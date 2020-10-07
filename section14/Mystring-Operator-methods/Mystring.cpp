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
    std::cout << "Copy constructor deep" << std::endl;
    str = new char [std::strlen(source.str) + 1]; // creates new heap storage with source object length + 1 to create a unique area for deep copy
    std::strcpy(str, source.str); // copy the values to this area. 
        
}

//Move constructor

Mystring::Mystring(Mystring &&source)
    :str(source.str){
 
    source.str = nullptr; // after stealing the pointer of source it then nulls it out to point to nothing. 
    std::cout << "Move constructor used" << std::endl;
  
}

//Destructor

Mystring::~Mystring() {
    if (str == nullptr) {
        std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
    } else {
         std::cout << "Calling destructor for Mystring : " << str << std::endl;
    }
    delete [] str;
}

//Copy assignment

Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy assignment" << std::endl;
    
    if (this == &rhs){ // if the 'this' (LHS) is the same as rhs then return the dereference 'this' as the string to assign. a = a;
        return *this;
    }
    
    delete [] this->str; // deallocate the str memory that 'this' was pointing to. 
    str = new char[std::strlen(rhs.str)+1]; // creates new space for characters to be stored of size newstring + 1 / 
    std::strcpy(this->str, rhs.str); // copy the value of RHS to LHS
    return *this; // return the dereference this pointer which now stores the rhs value
    
}

//Move assignment

Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout << "Using move assignment" << std::endl;
    
    if (this == &rhs){ // self assignment therefore return this. 
        return *this;
    }
    
    delete [] str; //deallocate the str memory as its going to point to what RHS was now in memory. 
    
    str = rhs.str; // set the str pointer to be RHS pointer
    
    rhs.str = nullptr; //null RHS pointer therefore it doesnt point to anything and can be destroyed as its temp

    return *this ; // return this->str; which is the pointer of what rhs was pointing to
}

// Equality
bool Mystring::operator==(const Mystring &rhs) const{
    std::cout << "Equality operator overload activated" << std::endl;
    return (std::strcmp(str, rhs.str) == 0); // strcmp outputs 0 if true
    
}

//Make lowercase

Mystring Mystring::operator-() const{
    std::cout << "- operator overload for lowercase activated" << std::endl;
    
    char *buff = new char[std::strlen(str)+ 1]; // dont want to change the actual object as its const therefore make a buff temp heap to store the new value then copy to a new object and return this as the output. 
    
    std::strcpy(buff, str); // copys value of string passed in to buffer after allocating correct memory space to it
    
    for (size_t i{0}; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]); // changes all values in the buff to lowercase
    }
    
    Mystring temp {buff}; // stores the buff value in a temp value
    
    delete [] buff; // deletes the buff memory slot allocation to prevent memory leaks 
    
    return temp; // return the new lower case value of the string. 
    
}
// Concatenate 

Mystring Mystring::operator+(const Mystring &rhs) const{
    std::cout << "+ operator overload activated for contatenation" << std::endl;
    
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1]; // alocate space for both strings + 1 for null terminator 
    
    std::strcpy(buff , str); // copy left hand object to buff
    std::strcat(buff, rhs.str); // concatenate the rhs to c style string 
    
    Mystring temp {buff}; // write a temp value using the new buff string of type Mystring 
    
    delete [] buff; // deallocate the temp buff memory 
    
    return temp; // return temp which an mystring object which has concatenated. 
    
}

//display method
void Mystring::display() const{
    std::cout << str << " : " << getlength() << std::endl;
}

//length getter
int Mystring::getlength() const {return std::strlen(str);}

//string getter - returns const char pointer 
const char *Mystring::getStr() const {return str;}




