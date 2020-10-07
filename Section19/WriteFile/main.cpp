#include <iostream>
#include <fstream>
#include <string>

int main(){
    
    std::ofstream outFile {"D:\\UdemyMain\\c++\\Section19\\WriteFile\\output.txt", std::ios::app}; // open in append mode rather than trunc
    
    if (!outFile){
        std::cerr << "ERROR CREATING FILE" << std::endl;
        return 1;
    }
    
    std::string line;
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);
    
    outFile << line << std::endl;
    
    outFile.close();
    
    return 0;
}