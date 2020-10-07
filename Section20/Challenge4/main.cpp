#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

template <typename T>
void display(std::queue<T> q) {
    std::cout << "[ ";
    while (!q.empty()) {
        T elem = q.front(); // elem = front of queue
        q.pop(); // pop that from queue
        std::cout << elem << " "; // display 
    }
    std::cout << "]" << std::endl;
}

template <typename T>
void display(std::stack<T> s) {
    std::cout << "[ ";
    while (!s.empty()) {
        T elem = s.top();// elem = top 
        s.pop(); // remove top 
        std::cout << elem << " ";// display top
    }
    std::cout << "]" << std::endl;
}

bool is_palindrome(const std::string& s)
{
    std::queue<char> q;
    std::stack<char> st;
    
    std::for_each(s.begin(), s.end(), [&] (char x){ // char x is local variable passed in as reference. 
        if (::isalpha(x)){
            st.push(std::toupper(x));
            q.push(std::toupper(x));
        }
    });
    
    std::queue<char> x;
    
    while (!st.empty()){
        char elem = st.top();
        st.pop();
        x.push(elem);
    }
    
    return q == x;
}


int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
       
       std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}