#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n){
    if (n <= 1 ){
        return n; // the base cases of the sequence
    }
    return fibonacci(n-1) + fibonacci(n-2); // recursion 
}

int main(){
    cout << fibonacci(4) << endl; // 5 
    cout << fibonacci(30) << endl; // 832040
    
}

