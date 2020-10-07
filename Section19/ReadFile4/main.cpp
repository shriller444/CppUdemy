#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;
    in_file.open("D:\\UdemyMain\\c++\\Section19\\ReadFile4\\poem.txt"); // could have done std::ifstream in_file {filename};
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    char c {}; // define c as character data type
    
    while (in_file.get(c)) {// reads one character at a time, this is unformatted and doesnt worry about new lines etc. 
        std::cout << c; 
    }
    std::cout << std::endl;
    in_file.close();
    return 0;
}