/*

Issues with raw pointers

- C++ provides absolute flexibility with memory management
 - allocation / deallocation / lifetime management
 
- Some serious problems potentially
  - uninitalised wild pointers
  - Memory leaks
  - Dangling pointer
  - Not exception safe
  
- Ownership
 - who owns the pointer
 - When should the pointer be deleted. 