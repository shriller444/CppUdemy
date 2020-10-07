#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;// create ifstream in file object 
    in_file.open("D:\\UdemyMain\\c++\\Section19\\ReadFile3\\poem.txt");
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    std::string line{};
    while (std::getline(in_file, line)) { // get one line at a time until the end of a text file rather than using insertion for each word due to issue knowing where lines end
        std::cout << line << std::endl; // output the line 
    }
    
    in_file.close();
    return 0;
}