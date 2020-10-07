#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// display any vector of integers using range-based for loop in a nice format 
void display(const std::vector<int> &vec) {
    std::cout << "[ ";
    for (auto const &i: vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

// simple iterator that is set to the beggining of the vector
void test1() {
    // it is an object but acts like a pointer.
    std::cout << "\n=============================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    auto it = nums1.begin();   //auto deduces the type of iterator to use         
    std::cout << *it << std::endl; // dereference to output the value at that iterator location 1

    it++;                                          
    std::cout << *it << std::endl;   //2

    it += 2;       // increment iterator                                
    std::cout << *it << std::endl; //4

    it -= 2;       //decrement iterator                                 
    std::cout << *it << std::endl;//2

    it = nums1.end() - 1;  //nums1.end() = next free space therefore -1 = last number  
                
    std::cout << *it << std::endl; //5
}

void test2() {
    std::cout << "\n=============================" << std::endl;
    // display all vector elements using an iterator
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};

    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }
    
    // change all vector elements to 0
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0; // set the value the iterator is pointing to -> 0/
        it++; // increment iterator
    }

    display(nums1); // display vector [0,0,0,0,0]
}

void test3() {
    
    // using a const_iterator to prevent iterator from changing values.
    std::cout << "\n=============================" << std::endl;
    std::vector<int> nums1 {1, 2, 3, 4, 5};

    std::vector<int>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();
    
    while (it1 != nums1.end()) {
        std::cout << *it1 << std::endl;
        it1++;
    }
    
    // compiler error when we try to change element
    it1 = nums1.begin(); // reset the iterator value to be the start again .
    while (it1 != nums1.end()) {
       // *it1 = 0;   // Complier error - read only
        it1++;
    }

}

void test4() {
    // more iterators
    // using a reverse iterator
    std::vector<int> vec {1,2,3,4};
    auto it1  = vec.rbegin();       // reverse iterator over vector of ints starts at 4
    while (it1 != vec.rend()) { // rend = reverse end 
        std::cout << *it1 << std::endl; 
        it1++; // this technically means decrementing as it doesnt make it go forward oppposite to reverse.
    }

    // const reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "Curly"}; // list is items with pointers backk and forth  betwen
    auto it2 =name.crbegin();    // iterator over list of strings  point to Curly
    std::cout << *it2 << std::endl; // Curly
    it2++;  // point to Moe
    std::cout << *it2 << std::endl; // Moe

    // iterator over a map
    // note that maps sorted alphabetically by their key. and this is the order that iterator starts at also
    std::map<std::string, std::string> favorites {
        {"D", "XX"},
        {"F", "//"},
        {"C", ".."}
    };
    auto it3 = favorites.begin();   // iterator over map of string, string pairs, starts at first pair and prints out the first and second value
    while (it3 != favorites.end()) {
        std::cout << it3->first << " : " << it3->second << std::endl; // it3-> first fetches first item in the dict, second ofc the second same as (*it3).second()
        it3++; // increment to next item.
    }
}

void test5() {
    // iterate over a subset of a container
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2; // iterate starting at 3rd position
    auto finish = vec.end() - 3; // end at 2nd last value = 8th 
    
    while (start != finish) { // != 8
        std::cout << *start << std::endl;
        start++;
    }
    
}
int main() {

    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}