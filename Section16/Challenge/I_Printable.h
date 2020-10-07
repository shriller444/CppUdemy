#ifndef _print_h_
#define _print_h_
#include <iostream>
class I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const =0;
    virtual ~I_Printable() = default; // makes all destructors automatically virtual 

};

#endif // _print_h_
