/*

- provides a non-owning "weak" reference 

- weak_ptr<T>
 - Points to an object of type T on the heap
 - Does not participate in owning relationship
 - Always created from a shared_ptr
 - does NOT increment or decrement the reference use count
 - use to prevent strong reference cycles which could prevent objects from being deleted.
 
 weak_ptr - circular or cyclic reference
 
 - A refers to B
 - B refers to A 
 - Shared strong ownership prevents heap deallocation. 
 
 - solution - make a pointer non owning or weak
 - now makes sure heap storage is deallcoated properly. 
 */
 
#include <iostream>
#include <memory>
// these 2 objects are created on the heap and both reference each other therefore cannot be removed creating memory leak. 
class B; // forward declaration to ensure the compiler knows there is a class B

class A{
    std::weak_ptr<B> b_ptr; // shared pointer pointing to B object , weak_ptr doesnt have ownership therefore prevents memory leak 
public:
    void setB(std::shared_ptr<B> &b){
        b_ptr = b;
    }
    A() {std::cout << "A constructor" << std::endl;}
    ~A() {std::cout << "A destructor" << std::endl;}
    
};

class B{
    std::shared_ptr<A> a_ptr; // shared pointer pointin to a object of type A, must be made weak to prevent strong circular reference.
public:
    void setA(std::shared_ptr<A> &a){
        a_ptr = a; 
    }
    B(){std::cout << "B constructor" << std::endl;}
    ~B(){std::cout << "B destructor" << std::endl;}
    
};

int main(){
    
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->setB(b);
    b->setA(a);
    
    // when the pointer are out of scope they are deleted alongside their objects , however as one object has a shared pointer
    // referencing it , it will not be deleted therefore the objects are not deleted creating a memory leak. 
    
    // destructors wont call if both use shared_ptrs
    
    // use count can never be 0 as both shared pointers would have to be deleted but this is not possible as they refer to each other. 
    
    //weak ptr means the use count is not increase on use therefore once the shared pointer goes out of scope the use count is 0 and destructors 
    // are called for both objects on the heap to free the dynamically allocated memory. 
    
    
}

