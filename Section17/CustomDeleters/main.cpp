/*custom deleters

- sometimes when we destroy a smart pointer , we need more than to just destroy the object on heap

- special use cases

- C++ smart pointers allow you to provide custom methods for deleting 

- many ways of achieving
 - lambdas - anoymous function defined inline and used straight there. 
 - functions
 - others. 
 */
 
 #include <iostream>
#include <memory>

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl; }
};

// delet function that takes a Test pointer as input. 
void my_deleter(Test *ptr) {
    std::cout << "\tUsing my custom function deleter" << std::endl;
    delete ptr;
}

int main() {

    {
        // Using a function 
        std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter }; // put delete function as second parameter, 
    }

    std::cout << "====================" << std::endl;
    {
        // Using a Lambda expression
        std::shared_ptr<Test> ptr2 (new Test{1000}, 
            [] (Test *ptr)  { // lambda parameters.
                std::cout << "\tUsing my custom lamdba deleter" << std::endl;
                delete ptr;
            }); // code block defined where the my_deleter function should go is lambda
    }
    
    return 0;
}