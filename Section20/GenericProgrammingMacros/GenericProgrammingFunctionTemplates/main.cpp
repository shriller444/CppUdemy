#include <iostream>
#include <string>
// templates arent actually created until user specfies the template call.

template <typename T> // define template of typename T where T = class or data type

T min (T a, T b){
    return (a < b) ? a:b; // must be overloaded from our own types
}

template <typename T1, typename T2> // definingtwo classes or data types as parameters for the func

void func(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}

struct Person{ // class but all public , used for containing related data about a specific thing. 
    int i:1;
    std::string name;
    int age;
    
    bool operator<(const Person &rhs) const{ // overload the Person < operator
        return this->age < rhs.age; // rhs = b or p2 in this case. a is the 'this' pointer. 
    }
    
    
    
};

// dont need to friend as its a public struct. 
// not placed in the struct as it doest not need any specific access to 'this'
std::ostream &operator<<(std::ostream &os, const Person &rhs){
    os << "[name: " << rhs.name << "| age: " << rhs.age <<"]";
    return os;
}

template <typename T>

// generic swap function using templates , must overload if object doesnt support assignment
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    Person p1 {"Balls", 50};
    Person p2 {"Moe", 30};
    
    Person p3 = min(p1,p2); // no operator overloading therefore cannot compare 2 person objects. 
    std::cout << p3.name << " is younger" << std::endl;
    
    func(p1,p2);
    int x {100};
    int y {200};
    std::cout << x << " " << y << std::endl;
    mySwap(x, y); // strings , characters etc. 
    std::cout << x << " " << y << std::endl;
    
    std::cout << min<int>(2,3) << std::endl;    // 2
    std::cout << min(2,3) << std::endl;         // 2
    std::cout << min('A', 'B') << std::endl;    // A
    std::cout << min(12.5, 9.2) << std::endl;   // 9.2
    std::cout << min(5+2*2, 7+40) << std::endl; // 9
    
    func<int,int>(10,20); // compiler not deducing the types
    func(10,20); // compiler deducing types 
    func<char, double>('A', 12.4);
    func('A', 12.4);
    func(1000, "Testing"); // cstring
    func(2000, std::string{"Frank"});// c++ string 
  

    return 0;
}