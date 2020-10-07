#include <iostream>
#include <fstream>

void toUpper(std::string &str){
    for (int i{}; i < str.length(); i++){
        str[i] = toupper(str[i]);
    }
    
}
int main(){
    std::string word;
    std::string flag;
    std::string line;
    
    std::ifstream inFile;
    inFile.open("D:\\UdemyMain\\c++\\Section19\\Challenge3\\romeoandjuliet.txt");
    
    if (!inFile){
        std::cerr << "error" << std::endl;
    }
 
    std::cout << "Enter word to find: ";
    std::cin >> word;
    
    std::cout << "Yall wanna do case sensitive Y/N: ";
    std::cin >> flag;
 
    int lineCount{};
    int count {};
    while (inFile >> line){
        lineCount++;
        if (flag == "y" || flag == "Y"){
            if (line.find(word) != std::string::npos){ 
            count++;
            }
        }
        else{
            toUpper(line);
            toUpper(word);
            if(line.find(word) != std::string::npos){
                count++;
            }
        }
    }
    
    std::cout << "Searched " << lineCount << " words" << std::endl;
    std::cout << word << " Was found "<< count << " times"<<std::endl;
    
    inFile.close();
    return 0;
}