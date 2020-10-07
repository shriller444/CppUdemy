/*

What are they

 - Objects
 - can only point to heap allocated memory 
 - automatically call delete when no longer needed
 - adhere to RAII principles
 
 - C++ smart pointers
  - unique pointers -> unique_ptr
  - Shared pointers -> shared_ptr
  - Weak pointesr -> weak_ptr
  - Auto pointers -> auto_ptr

  
- use #include <memory> to use the smart pointer library

- defined by class templates
 - wrapper around a raw pointer

 - Overloaded operators:
  - dereference *
  - member selection ->
  - Pointer artihmetic not supported : ++ -- etc
  
- can have custom deleters.

- as its object when it goes out of scope the destructor to call delete is automatically called. 

RAII - Resource acquisition is initialisation 

- common idiom / pattern used in software design based on the container object lifetime

- RAII objects are allocated on a stack 

- Resource acquisition 
 - open FILE
 - allocate memory
 - Acquire a lock
 
- IS initisaltion 
 - The resource is acquired in a constructor
 
- Resource relinquishing
 - Happens in the destructor
   - Close FILE
   - deallocate memory
   - Release lock 