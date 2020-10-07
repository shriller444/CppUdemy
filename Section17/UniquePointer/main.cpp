/*

unique_ptr

- simple smart pointer that is very efficient

- unique_ptr<T>
 - points to an object of type T on heap
 - its unique there can only be one unique_ptr<T> pointing to the object on the heap
 - it owns what its pointing to
 - cannot be assigned or copied
 - can be moved
 - when the pointer is destroyed what its points to is automatically destroyed. 
 
 p1.get() --> returns the memory address of the memory pointed to which is the pointer
 
 p1.reset() --> resets to null and deallocates. 
 
 std::move used when making a vector of unique pointers as vectors before used copy semantics rather than move semantics
 
 make_unique makes the object and pointer in one line , no calls for new or delete required
 
 auto unique pointers can deduce pointer type on heap 
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



int main() {
    
    //raw pointer Test *t1 = new Test{1000};
    // manually call this delete : delete t1;
    
    std::unique_ptr<Test> t1 {new Test{100}}; //creates a unique pointer of type Test init to a Test object on the heap set to 100 initial. 
    
    // only use make_unique if you are NOT adopting a raw pointer from elsewhere or need to make a custom deleter
    std::unique_ptr<Test> t2 = std::make_unique<Test>(1000); // odd syntac, but this makes a unqiue pointer and assigns it a value of Test set to 1000 initially. 
    
    std::unique_ptr<Test> t3; 
    
    // t3 = t1; // impossible as t1 deleted durign assignment therefore cannot work . CANNOT copy unique pointers
    t3 = std::move(t1); // transfers ownership of t1 to t3 therefore t3 now points to new Test{100} as a unique pointer
    
    if (!t1){
        std::cout << "t1 is null" << std::endl; // if no ownership , then its set to null. 
    }
    
    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe",5000);
    std::cout << *a1 << std::endl;
    a1->deposit(5000);
    std::cout << *a1 << std::endl;
    
    std::vector<std::unique_ptr<Account>> accounts; // creates a vector of unique pointers to Account objects
    
    accounts.push_back(std::make_unique<Checking_Account>("James",1000));
    accounts.push_back(std::make_unique<Savings_Account>("Cock",14000,5.3));
    accounts.push_back(std::make_unique<Trust_Account>("balls",135000,3.3));
    
    for (const auto &acc: accounts){ // must do by reference as it cannot create a copy of the pointers. 
        std::cout << *acc << std::endl;
    }
    
    return 0; 
    
}
