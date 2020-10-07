#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#include <iterator>
#include <cctype>
#include <algorithm>
#include <vector>
// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

void display_words(const std::map<std::string, int> &words) {
    std::cout << std::setw(12) << std::left << "\nWord"
                << std::setw(7) << std::right << "Count"<< std::endl;
    std::cout << "===================" << std::endl;
    for (auto pair: words)
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::setw(7) << std::right << pair.second << std::endl;
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

void display_words(const std::map<std::string, std::set<int>> &words)
{
     std::cout << std::setw(12) << std::left << "\nWord"
                << "Occurrences"<< std::endl;
    std::cout << "=====================================================================" << std::endl;
    for (auto pair: words) {
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::left << "[ ";
        for (auto i: pair.second) 
            std::cout << i << " ";
        std::cout << "]" << std::endl;
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
std::string clean_string(const std::string &s) {
    std::string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

// Part1 process the file and builds a map of words and the 
// number of times they occur in the file

void part1() {
    std::map<std::string, int> words;
    std::string line;       
    std::string word;   
    std::ifstream in_file {"D:\\UdemyMain\\c++\\Section20\\Challenge3\\words.txt"};
    if (in_file) {
        while (std::getline(in_file, line)){
            line = clean_string(line);
            std::istringstream lineStream {line}; // create the line to a read only string stream
        
            while (lineStream){ //while not at the end of the string stream
                lineStream >> word; // read the word
                words[word]++;
            }
        }
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}
    
// Part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears

void part2() {
    std::ifstream in_file {"D:\\UdemyMain\\c++\\Section20\\Challenge3\\words.txt"};
    std::map<std::string, std::set<int>> words;
    std::vector<std::string> vec;
    std::string line;
    std::string word;
    if (in_file) {
        int num {1};
        while (std::getline(in_file, line)){
            line = clean_string(line);
            std::istringstream lineStream {line}; // create the line to a read only string stream
            std::for_each(std::istream_iterator<std::string>(std::istringstream(line) >> std::skipws), std::istream_iterator<std::string>(), [&](std::istringstream(line),int num, std::map<std::string, std::set<int>> words){words[].insert(num);});
//            while (lineStream){ //while not at the end of the string stream
//                lineStream >> word; // read the word
//
//                //words[word].insert(num); 
//            }
//            num++;
        }
       
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}

int main() {
    //part1();
    part2();
    return 0;
}

