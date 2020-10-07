#include <iostream>
#include <string>
#include <vector>

//Template classes are typically contained in header files 
//So, we would have the template class in item.h and no item.cpp file needed

template <typename T> 

class Item {

private:
    std::string name;
    T value;
public:
    Item(std::string name, T value)
    : name{name}, value{value}{}
    
    std::string get_name() const {return name;}
    T get_value() const {return value;}
    
};

template <typename T1, typename T2> // 2 parameter list of data types that could be different 

struct My_Pair{ // struct models data. 
    T1 first; // type determined by data type users chooses when making object of struct. 
    T2 second;
};

int main() {
    
    Item<int> item1 {"Frank", 100}; // create Item object and set value to be int type.
    std::cout << item1.get_name() << " " << item1.get_value() << std::endl;
    
    Item <std::string> item2 {"Frank", "Professor"}; // create Item object and set value to be std::string type. 
    std::cout << item2.get_name() << " " << item2.get_value() << std::endl;
    
    Item <Item<std::string>> item3 {"Frank",  {"C++", "Professor"}}; // the data type is of Type item using std::string as T to nest an object in another 
    std::cout << item3.get_name() << " " 
                    << item3.get_value().get_name() << " " // get value which is the object then get name , vice versa for value. 
                    << item3.get_value().get_value() << std::endl;
    
    std::cout << "\n================================" << std::endl;
    std::vector<Item<double>> vec {}; // create vector of item objects where values are doubles 
    
    vec.push_back (Item<double>("Larry", 100.0));
    vec.push_back (Item<double>("Moe", 200.0));
    vec.push_back (Item<double>("Curly",300.0));
    
    for (const auto &item: vec) {
        std::cout << item.get_name() << " " << item.get_value() << std::endl; // print out the items. 
    }
   
    std::cout << "\n================================" << std::endl;
    My_Pair <std::string, int> p1 {"Frank", 100}; // associates string and integer as a pair in a struct My_Pair 
    My_Pair <int, double> p2 {124, 13.6};

    std::cout << p1.first << ", " << p1.second << std::endl;
    std::cout << p2.first << ", " << p2.second << std::endl;
    
    return 0;
}