#include <iostream>
#include <fstream> 

int main(){
    
    std::ifstream inFile;
    std::string line;
    int num;
    double total;
    
    inFile.open("D:\\UdemyMain\\c++\\Section19\\ReadFile1\\test.txt");
    
    if (!inFile){
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    // file acts as a input stream to the line variable
    
    // even if file is formatted differently as long as there is a whitespace this method of insertion works
    inFile >> line >> num >> total; // input stream is the Infile and it reads into line which is a string
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;
    
    inFile.close();
    return 0;
}