#include <iostream>
#include <iomanip>
#include <fstream>

int main() {
    std::ifstream in_file;
    std::string line;
    int num;
    double total;
    
    in_file.open("D:\\UdemyMain\\c++\\Section19\\ReadFile2\\test.txt");
    
    if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    
//    while (!in_file.eof()){
//        in_file >> line >> num >> total;
//    }
    
    while (in_file >> line >> num >> total) { // if their is an invalid read to the insertion operator then this fails and returns false. 
        std::cout << std::setw(10) << std::left << line  // setwidth 10 and push the first line to the side 
                       << std::setw(10) << num // setwidth 10 and put in the right
                       << std::setw(10)  << total // setwidth 10 and put in the right
                       << std::endl;
    }
    in_file.close();
    return 0;
}

