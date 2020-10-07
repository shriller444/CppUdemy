#include <iostream>
#include <fstream>
#include <string>
// copy with getline
int main() {
    std::ifstream in_file {"D:\\UdemyMain\\c++\\Section19\\CopyFile1\\poem.txt"};
    std::ofstream out_file{"D:\\UdemyMain\\c++\\Section19\\CopyFile1\\poem_out.txt"};
    if (!in_file) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
     if (!out_file) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
    std::string line {};
    
    while (std::getline(in_file, line)){
        out_file << line << std::endl;
    }
    
    std::cout << "File copied" << std::endl;
    in_file.close();
    out_file.close();
    return 0;
}



