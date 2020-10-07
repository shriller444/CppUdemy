#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

int main(){
    std::ifstream inFile;
    inFile.open("D:\\UdemyMain\\c++\\Section19\\Challenge2\\responses.txt");
    
    if (!inFile){
        std::cerr << "ERROR OPENING FILE" << std::endl;
    }
    
   
    
    std::string key;
    std::string name;
    std::string answer;
    std::getline(inFile, key);
    int total {};
    int studentCount {};
    
    
    std::cout << std::setw(13) << std::left << "Student" << std::setw(13) <<std::right<<"Score" << std::endl;
    std::cout << std::setw(26) << std::setfill('-') << "" << std::endl;
    
    std::cout << std::setfill(' ');
    while (inFile >> name >> answer){
        studentCount++;
        int correct {};
        for (size_t i{0}; i < key.size(); i++){
            if (key[i] == answer[i]){
                correct++;
            }
        }
        total += correct;
        std::cout << std::setw(13) << std::left << name << std::setw(13) <<std::right << correct << std::endl;
    }
    std::cout << std::setw(26) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(13) << std::left << "Average score" << std::setw(13) << std::right << std::fixed << std::setprecision(1) << (double)total/studentCount << std::endl;
    
    
    
    
    
    return 0;
}