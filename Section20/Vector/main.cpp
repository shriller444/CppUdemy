#include <iostream>
#include <vector>
#include <algorithm>

class Person {
    // overloads extraction operator to display the person object in a nice format 
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() = default; // default constructor when no args are passed -
    Person(std::string name, int age) 
        : name{name}, age{age}  {} // initisalse the person object with these values. 
        
    //ALWAYS OVERLOAD THESE ON USER DEFINED CLASSES
    
    //overload < operator to display comparison of age 
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    // overload == operator to compare both name and age of the person objects. 
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

// Use for_each and a lambda expression to display vector elements
void display2(const std::vector<int> &vec) {
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(),
        [](int x) { std::cout << x << " ";});// this prints each with value with a space after and in [] -> [1,2,3,4,5] 
    std::cout << "]" << std::endl;
}

// template function to display any vector using typename T. 
template <typename T>
void display(const std::vector<T> &vec) {
    std::cout << "[ ";
    for (const auto &elem: vec) // goes through each value in vec and outputs into [] -> [values type T]
        std::cout << elem << " ";
    std::cout <<  "]"<< std::endl;
}


void test1() {
    std::cout << "\nTest1 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec = {2,4,5,6}; // assign new values to this vec. 
    display2(vec);
    
    std::vector<int> vec1 (10, 100);    // ten 100s in the vector, uses an overloaded operator in the vector class member functions
    display(vec1);
}

void test2() {
    std::cout << "\nTest2 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl; // shows how many elements 
    std::cout << "vec max size: " << vec.max_size() << std::endl; // shows how many elements can be stored, very high
    std::cout << "vec capacity: " << vec.capacity() << std::endl; // shows how elements can be stored without allocating new memory space
    
    vec.push_back(6); // add 6 , creates capacity to be increased, often double. 
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl; // 10 
    
    vec.shrink_to_fit();    // C++11, remove extra capacity that hasnt been used up to fit only what elements are there. 
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    
    vec.reserve(100); // sets capacity to be 100 
    display(vec);
    std::cout << "\nvec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    
}
void test3() {
    std::cout << "\nTest3 =========================" << std::endl;

    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec[0] = 100;
    vec.at(1) = 200; // exceed bounds then an exception is created 
    
    display(vec);
}

void test4() {
    std::cout << "\nTest4 =========================" << std::endl;
    std::vector<Person> stooges;
    
    Person p1 {"Larry", 18};
    display(stooges);
    
    stooges.push_back(p1);
    display(stooges);
    
    stooges.push_back(Person{"Moe", 25}); // not a named object therefore uses move semantics like its an R value.
    display(stooges);
    
    stooges.emplace_back("Curly", 30);      // Use emplace_back!!!, calls the player class and constructs without copy or moving the object. 
    display(stooges);
}

void test5() {
    std::cout << "\nTest5 =========================" << std::endl;

    std::vector<Person> stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 30}
    };
    
    display(stooges);
    std::cout << "\nFront: " << stooges.front() << std::endl; // displays reference to value at front
    std::cout << "Back: " << stooges.back() << std::endl; // display reference to element at back
    
    stooges.pop_back(); // removes element from the back , LIFO
    display(stooges);
}

void test6() {
    std::cout << "\nTest6 =========================" << std::endl;
    std::vector<int> vec {1,2,3,4,5};
    display(vec);
    
    vec.clear();    // remove all elements from the vector
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10}; // assign new values 
    display(vec);
    vec.erase(vec.begin(), vec.begin() + 2); // removes all values 1-2
    display(vec);
    
    vec = {1,2,3,4,5,6,7,8,9,10};
    // erase all even numbers
    auto it = vec.begin(); // iterator starts at first element
    while (it != vec.end()) { // while not at the last element
        if (*it %2 == 0) // check if even
            vec.erase(it);  //erase at the location of that iterator. 
        else
            it++;   // only increment if not erased!, this is to signal to go to next value.
    }
    display(vec);
}

void test7() {
    std::cout << "\nTest7 =========================" << std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<int> vec2 {10,20,30,40,50};
    
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    vec2.swap(vec1); // simply swap values of each vector 
    display(vec1);
    display(vec2);
}

void test8() {
    std::cout << "\nTest8  =========================" << std::endl;

    std::vector<int> vec1 {1,21,3,40,12};    
    
    display(vec1);
    std::sort(vec1.begin(), vec1.end()); // sort values from start to finish. 
    display(vec1);
}

void test9() {
    // std::back_inserter contructs a back-insert iterator that inserts new elements 
    // at the end of the container it applied to. It's a special output iterator
    // It's awesome!!!!   and  very efficient
    // There is also a front_inserter we can use with deques and lists
    // Copy one list to another using an iterator and back_inserter
    
    std::cout << "\nTest9  =========================" << std::endl;
    
    std::vector<int> vec1 {1,2,3,4,5};   
    std::vector<int> vec2 {10,20};
    
    display(vec1); 
    display(vec2);
    std::cout << std::endl;

    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2)); // back inserter all values of vec1 after 10,20 in vec2. 
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    
    // Copy_if the element is even
    
    vec1 = {1,2,3,4,5,6,7,8,9,10};
    vec2 = {10,20};
    
    display(vec1);
    display(vec2);
    std::cout << std::endl;
    
    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2),
            [](int x) { return x%2 == 0; }); // if they meet the predicate value then from the range specified it inserts the values of vec1 passing
                                             // the condition to the back of vec2 via std::back_inserter.
    display(vec1);
    display(vec2);
    
    
}

void test10() {
    std::cout << "\nTest10  =========================" << std::endl;
    // transform over 2 ranges
    
    std::vector<int> vec1 {1,2,3,4,5};   
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;
    
    
    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the results in vec3, very powerful 
    std::transform(vec1.begin(), vec1.end(), vec2.begin(), //only mention begin as its only doing it for the range of vec1. 
        std::back_inserter(vec3), //back insert the output of the lambda expression to vec3. 
        [](int x, int y) { return x * y;}); // [] access only local variables and passes them in as x and y to be mutated on. 
        
    display(vec3);

}



// Insertion from another vector
// Insert vec2 into vec1 before the 5
void test11() {
    std::cout << "\nTest11  =========================" << std::endl;
    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> vec2 {100,200,300,400};
    
    display(vec1);
    display(vec2);
    std::cout << std::endl;

    
    auto it = std::find(vec1.begin(), vec1.end(), 5); // set iterator to point to element 5 
    if (it != vec1.end()) { // if 5 is fond 
        std::cout << "inserting..." << std::endl;
        vec1.insert(it, vec2.begin(), vec2.end()); // insert the entire of vec2 to where 5 was found
    } else {
        std::cout << "Sorry, 5 not found" << std::endl;
    }
    display(vec1);
}

int main()  {    

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    test10();
    test11();
    
    return 0;
}