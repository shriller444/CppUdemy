#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // need for algorithm
#include <cctype>  // for toupper and tolower

// simple person class 
class Person {
    std::string name;
    int age;
public:
    Person() = default; // default constructor
    Person(std::string name, int age) 
        : name{name}, age{age}  {}
    
    //overloaded less than operator to compare only the ages
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    
    //overloaded equality operator to compare both name and age being the same to return true/false
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

// Find an element in a container
void find_test() {
    std::cout << "\n========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5};
    
    auto loc = std::find(std::begin(vec), std::end(vec), 1); // create a loc iterator from begin to end searching for item 1 
    
    if (loc != std::end(vec)) // if it could locate then iterator points to what it was looking to 
        std::cout << "Found the number: " << *loc <<  std::endl; // display 1 
    else 
        std::cout << "Couldn't find the number" << std::endl; // iterator to end if couldnt find 
        
    std::list<Person> players {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };
    
    auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20}); // uses the overloaded == operator to search both fields to be same
    if (loc1 != players.end()) // returns iterator as pointer to found object
        std::cout << "Found  Moe" << std::endl; // display that moe was found
    else 
        std::cout << "Moe not found" << std::endl; // nothing found iterator holds the .end().
}

// Count the number of elements in a container
void count_test() {
    std::cout << "\n========================" << std::endl;

     std::vector<int> vec {1,2,3,4,5,1,2,1};
     
     int num = std::count(vec.begin(), vec.end(), 1);
     std::cout << num << " occurrences found" << std::endl; // simply stores how many occurencecs of the designated number from a start and end value.
}

// Count the number of occurences of an element in a container
// based on a predicate using a lambda expression

void count_if_test() {
    std::cout << "\n========================" << std::endl;

    // count only if the element is even
    std::vector<int> vec {1,2,3,4,5,1,2,1,100};
    int num = std::count_if(vec.begin(), vec.end(), [](int x) { return x %2 == 0; }); // applies the item to a lambda function that returns a boolean (predicate)
    std::cout << num << " even numbers found" << std::endl; // counts even numbers above 
    
    num = std::count_if(vec.begin(), vec.end(), [](int x) { return x %2 != 0; });
    std::cout << num << " odd numbers found" << std::endl; // counts odds numbers
    
    // how can we determine how many elements in vec are >= 5?
    num = std::count_if(vec.begin(), vec.end(), [](int x) { return x>=5;   });
    std::cout << num << "  numbers are >= 5" << std::endl; // numbers >=5

}

// Replace occurrences of elements in a container
void replace_test() {
    std::cout << "\n========================" << std::endl;

     std::vector<int> vec {1,2,3,4,5,1,2,1};
     for (auto i: vec) {
         std::cout << i << " "; // print out the items
     }
     std::cout << std::endl; // space 
     
    std::replace(vec.begin(), vec.end(), 1, 100); // replace all instances of 1 with 100, must use overloading for user defined types
    for (auto i: vec) {
         std::cout << i << " "; // print out items after the replacement 
     }
    std::cout << std::endl;
}

void all_of_test() {
    
    std::vector<int> vec1 {1,3,5,7,9,1,3,13,19,5};
    
    if (std::all_of(vec1.begin(), vec1.end(), [](int x) { return x > 10; })) // use lambda function to set the predicate. 
        std::cout << "All the elements are > 10" << std::endl; // displays if all items meet the condition
    else    
        std::cout << "Not all the elements are > 10" << std::endl;
    
    if (std::all_of(vec1.begin(), vec1.end(), [](int x) { return x < 20; }))
        std::cout << "All the elements are < 20" << std::endl;
    else    
        std::cout << "Not all the elements are < 20" << std::endl;        
}

// Transform elements in a container - string in this example
void string_transform_test() {
    std::cout << "\n========================" << std::endl;

    std::string str1 {"This is a test"};
    std::cout << "Before transform: " << str1 << std::endl;
    // ::toupper means to use the global scope, this function has been defined but we could transform with any function we can define
    // the 3rd input shows where to 
    std::transform(str1.begin(), str1.end(), str1.begin()+3, ::toupper); // sets all values to upper. str.begin(tells where to start placing the results in this case at the start)
    std::cout << "After transform: " << str1 << std::endl;
    
    // essentially the 3 input tells where to store the transformations of the characters read , this is done one by one during read
    // so if for example convert This is a test to upper and store results in 3rd character would output ThTHTHTHTHTHTH as Th at the start are read to the 3rd one
    // then the TH is just read on repeat till the end 
}

int main() {
    find_test();
    count_test();
    count_if_test();
    replace_test();
    all_of_test();
    string_transform_test();

    return 0;
}
