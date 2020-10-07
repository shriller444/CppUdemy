/*
shared pointers

 - provides shared ownership of heap objects

shared_ptr<T>
 - points to an object of type T on the heap
 - not unique --> there are many shared_ptrs pointing to the same object on the heap
 - Establishes shared ownership relationship
 - Can be assigned and copied
 - Can be moved
 - Doesnt support array management as default
 - when the use count is zero, the managed object on the heap is destroyed
 
use_count - the number of shared ptr objects managing the heap object. 

use make_shared - more efficent as of the instantiation requirements. 
all 3 pointers point to the same object on the heap

if not initliased a smart pointer is always null. 
 */
#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Savings_Account.h"

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "Test constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "Test destructor (" << data << ")" << std::endl; }
};

void func(std::shared_ptr<Test> &p){
    std::cout << "Use count: " << p.use_count() << std::endl;
}

int main() {
    
    // use_count - number of shared_ptr objects
    // managing the heap object
    
    std::shared_ptr<int> p1 {new int{100}};
    std::cout << "Use count: " << p1.use_count() << std::endl;
    
    std::shared_ptr<int> p2 {p1};  // Shared ownership of the object on the heap 
    std::cout << "Use count: " << p2.use_count() << std::endl;
    
    p1.reset(); // decrement the use count by nulling out the p1 pointer/
    
    std::cout << "\n===========================" << std::endl;
    std::shared_ptr<Test> ptr = std::make_shared<Test>(100);
    func(ptr); // outputs 2 as a copy is made using this function when not using pass by reference. 
    
    std::cout << "Use count: " << ptr.use_count() << std::endl;
    {
        std::shared_ptr<Test> ptr1 = ptr;
        func(ptr);
        {
            std::shared_ptr<Test> ptr2 = ptr;
            func(ptr);
            ptr.reset();
        }
        func(ptr);
    }
    func(ptr);
    
 
    // declare 3 make shared pointers to different types of accounts 
    std::cout << "\n==========================================" << std::endl;
    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>("Larry", 10000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account>("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account>("Curly", 6000);
    
    // creates a vector and pushes each of the shared pointers to account type on it.
    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for (const auto &acc: accounts) { // without & for reference the use count would be 3 for each output of use count as acc1 / the copy of acc1 in the vector/ the value copy of acc is also managing
        std::cout << *acc << std::endl;
        std::cout << "Use count: " << acc.use_count() << std::endl;//2 when pass by reference as the acc1 is managing and the vector copy of acc1. 
    }
    
    // vector copies are destroyed then as the other shared pointers are destroyed the use count goes to 0 for each removing the objects they pointed to. 
    std::cout << "==========================================" << std::endl;
    return 0;
}

