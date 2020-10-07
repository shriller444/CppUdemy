#include <iostream>

using namespace std; 

int main(){
    
    /* unitialized pointers
    
    int *intPtr; 
    
    cout << intPtr << endl;
    *intPtr = 100;
    
    */
    
    
    /* dangling pointers  
     
      - Pointer that is pointing to memory thas has been released. 
      e.g. 2 pointers point to the same data , 1 pointer rleases the date with delete , other pointers acccesses the release data.
       
      - Pointer that points to memory that is invalid 
       this was shown when we returned a pointer to a function local variable
    */ 
    
    /* Not checking if new failed
     
      - If new fails --> exception is thrown
      - We use the exception handling to catch exceptions
      - Dereferencing a null pointer causes the PROGRAM TO CRASH 
    */ 
    
    /* Memory leakage 
     
      - Forgetting to release allocated memory with delete
      - If a pointer is lost to the storage allocated then its impossible to access that storage
      - The memory is said to be orphaned or leaked. COMMON pointer problem
    */ 
    
    
    
    
    
    return 0;
}