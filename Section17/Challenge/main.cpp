#include <iostream>
#include <memory>
#include <vector>

class Test;
auto make();
// if you plan to pass by reference it must be defined in the signature, by value can be left un variable
void fill(std::vector<std::shared_ptr<Test>> & , int num);
void display(const std::vector<std::shared_ptr<Test>> &);

class Test {

private:
    int data;
public:
    Test() : data{0} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl; }
};



auto make(){
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num){
    int temp;
    
    for(int i{1}; i <= num; i++){
        std::cout << "enter value" << i << ": " << std::endl;
        std::cin >> temp;
        std::shared_ptr<Test> ptr = std::make_shared<Test>(temp);
        vec.push_back(ptr);
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec){
    
    for (const auto &v: vec){
        std::cout << v->get_data() << std::endl;
    }
    
}

int main(){
    
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vecPtr;
    vecPtr = make();
    
    std::cout << "How many data points to enter: ";
    int num;
    std::cin >> num;
    
    fill(*vecPtr, num);
    display(*vecPtr);
    return 0;
}