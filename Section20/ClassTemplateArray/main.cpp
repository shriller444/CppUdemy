#include <iostream>
#include <string>

template <typename T, int N> //N defined here as an int therefore is now known at compilation

class Array{
    int size {N}; // how do we get the N
    T values[N]; // the N needs to be known at time of compilation 
    
    friend std::ostream &operator<<(std::ostream &os, const Array<T,N> &arr){ // Array here must know the size N during compilation
        os <<"[";
        for (const auto &val: arr.values){
            os << val << " ";
        }
        os << "]" << std::endl;
        return os;
    }

public:
    Array() = default; // tells compiler to create a default version of this constructor.
    
    // replace int with T to make it not type specific.
    Array(T init_val){
        for(auto &item: values){
            item = init_val;
        }
    }
    void fill(T val){
        for (auto &item: values){
            item = val;
        }
    }
    
    int get_size() const{
        return size;
    }
    // overloaded subscript operator for easy use with accessing array elements 
    T &operator[](int index) {
        return values[index];
    }
};


int main() {
    
    Array<int , 5> nums; // array of 5 integers as it sets the values where N are in the class with 5.
    std::cout << "The size of nums is: "<< nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    nums.fill(0); // add 0 to all slots. 
    std::cout << "The size of nums is: "<< nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    nums.fill(10); // add 10 to all slots 
    std::cout << nums << std::endl;

    nums[0] = 1000; // nums[0] = nums.operator[](0) , access the member function overloaded opearaotr R value RHS.
    nums[3] = 2000;
    std::cout << nums << std::endl;
    
    Array<int, 100> nums2 {1}; // create 100 integers of 1. 
    std::cout << "The size of nums2 is: "<< nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings {std::string{"Frank"}}; // create array data type std::string with size 10 and init with a std::string Frank object
    // this line above calls the overloaded constructor of type T and sets each array slot to the value passed in which is init_val.
    std::cout << "The size of strings is: "<< strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    
    strings[0] = std::string{"Larry"};
    std::cout << strings << std::endl;
    
    strings.fill(std::string{"X"});
    std::cout << strings << std::endl;

    
    return 0;
}