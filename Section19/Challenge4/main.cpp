#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(){
    
    std::ifstream inFile {"D:\\UdemyMain\\c++\\Section19\\Challenge4\\romeoandjuliet.txt"};
    std::ofstream outFile {"D:\\UdemyMain\\c++\\Section19\\Challenge4\\lines.txt"};
    if (!inFile) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }
     if (!outFile) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }
    
    int lineNumber {1};
    std::string line;
    while (std::getline(inFile, line)){
        if (line != ""){
            outFile << std::setw(10) << std::left << lineNumber << line << std::endl;
            lineNumber++;
        }
        else{
            outFile <<std::endl;
        }
    }
    
    std::cout << "Copy complete" << std::endl;
    inFile.close()
    outFile.close()
    
    return 0;
}