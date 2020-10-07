#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){ // const
    for(size_t i{0}; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //arr[0] = 50000; // bug, prevent by changing the prototype to be a constant array therefore you cant edit it as you dont want to in the print array
}

// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100); // set all 5 elements in the array to  100  
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}

