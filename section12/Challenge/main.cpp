#include <iostream>

using namespace std;


// as this function is returning a pointer then the arrays must be passed in as pointers. 
// this is because when an array is passed in its actually a memory address therefore must be passed into a pointer.  

/* you can use this method of declaring a size value instead of passing in a pointer to an array using the correct data type that the original array was using. 
int *apply_all( const int array1[5], size_t size1 , const  int array2[3], size_t  size2)
 */
 
 // the size doesnt have to be declared also but the standard method is show below where the array is passsed in as a pointer

int *apply_all( const int *array1, size_t size1 , const  int *array2, size_t  size2){
    
    // you can actually do int *newArray = new int[array size] instead for more efficient use but not ideal. 
    int *newArray {nullptr};
    
    newArray = new int[size1 * size2];
    
    int counter {0};
    
    for (size_t j {0}; j < size2; j++){
        for (size_t k {0}; k < size1; k++){
                newArray[counter] = array2[j] * array1[k];
                counter++; 
        }
    }
    
    return newArray;
    
}

// a constant pointer that points to a constant array of integers. 
void print(const int *const array, size_t size){
    cout << endl;
    for (size_t i {0}; i < size; i++){
        cout << array[i] << endl;
    }
}
int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;

    delete [] results; 
    return 0;
}

