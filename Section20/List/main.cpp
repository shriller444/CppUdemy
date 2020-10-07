#include <iostream>
#include <list>
#include <algorithm>
#include <iterator> // for std::advance

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {} // set intial values for the default constructor when using.resize to create new values. 
    Person(std::string name, int age) 
        : name{name}, age{age}  {}
        
    // always overload these operators for user defined classes 
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}

// print the list nice for all types
template <typename T>
void display(const std::list<T> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\nTest1 =========================" << std::endl;

    std::list<int> l1 {1,2,3,4,5};
    display(l1);

    // forward list would not be able to push back 
    std::list<std::string> l2;
    l2.push_back("Back"); 
    l2.push_front("Front");
    display(l2);
    
    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    std::list<int> l4 (10, 100); // 10 100s to this container
    display(l4);
}

void test2() {
    std::cout << "\nTest2 =========================" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    std::cout << "Size: " << l.size() << std::endl;
    
    std::cout << "Front : " << l.front() << std::endl;
    std::cout << "Back  : " << l.back() << std::endl;
    
    l.clear();
    display(l);
    std::cout << "Size: " << l.size() << std::endl;
}

void test3() {
    std::cout << "\nTest3 =========================" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    
    l.resize(5);
    display(l); // removes last 5 elements
    
    l.resize(10);
    display(l); // creates 5 values of 0 added on to the list [1,2,3,4,5,0,0,0,0,0]
    
    std::list<Person> persons;
    persons.resize(5);             // uses the Person default constructor, to create 5 default constructors objects 
    display(persons);
    
}
void test4() {
    std::cout << "\nTest4 =========================" << std::endl;

    std::list<int> l {1,2,3,4,5,6,7,8,9,10};
    display(l);
    auto it = std::find(l.begin(), l.end(), 5); // set iterator to point to 5 if it can be found
    if (it != l.end()) {
        l.insert(it, 100); // insert 100 before 5 in the list. 
    }
    display(l);
    
    // it still pointing to 5 and locks to that value
    std::list<int> l2 {1000,2000,3000};
    l.insert(it, l2.begin(), l2.end()); // insert before 5 the values of 1000 2000 3000
    display(l);
    
    std::advance(it, -4);       // point to the 100, makes the iterator go 4 backwards to the left . 
    std::cout << *it << std::endl; //100
    
    l.erase(it);                    // remove the 100 - iterator becomes invalid
    display(l);
    
}

void test5() {
    std::cout << "\nTest5 =========================" << std::endl;

    std::list<Person>  stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    
    std::string name;
    int age{};
    
    std::cout << "\nEnter the name of the next stooge: ";
    getline(std::cin, name); // give a name
    
    std::cout << "Enter their age: "; // give an age
    std::cin >> age;
    
    stooges.emplace_back(name, age); // creates object directly and adds to the list
    display(stooges);
    
    // Insert Frank before Moe
    auto it = std::find(stooges.begin(), stooges.end(), Person{"Moe", 25}); // locates moe using overloaded == operator
    if (it != stooges.end())
        stooges.emplace(it, "Frank", 18); // place frank before moe 
    display(stooges);    
}

void test6() {
    std::cout << "\nTest6 =========================" << std::endl;
    
    std::list<Person>  stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    stooges.sort(); // sorts age wise.
    display(stooges);
}


int main() {
    
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    std::cout << std::endl;
    return 0;
}