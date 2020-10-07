#include <algorithm>
#include <sstream>
#include <string>
#include <unordered_map>
#include <string_view>
#include <set>
#include <iostream>
#include <fstream>
#include <vector>

class FileReader
{
public:
    FileReader(const std::string& path) : stream_(path, std::ios::in) {}
    
    bool atEnd()
    {
        return stream_.eof();
    }
    
    std::string nextLine()
    {
        lineNumber_++;
        
        std::string line;
        std::getline(stream_, line);
        return line;
    }
    
    int currentLineNumber() { return lineNumber_; } 
    
    explicit operator bool() { return bool(stream_); }
        
private:
    std::ifstream stream_;
    int lineNumber_ = 0;
};

class WordCounter
{
public:
    void addWord(const std::string& word, int line)
    {
        auto& set = counter_[word];
        set.emplace(line);
    }
    
    friend std::ostream& operator<<(std::ostream& os, const WordCounter& counter)
    {
        for(const auto& [key, set] : counter.counter_)
        {
            os << key;
            for(int val : set)
                os << ' ' << val;
            os << '\n';
        }
        return os;
    }
    
private:
    std::unordered_map<std::string, std::set<int>> counter_;
};

std::vector<std::string> splitString(std::string_view str, char separator)
{
    std::vector<std::string> words;
    while (!str.empty())
    {
      auto next = str.find(separator);
      
      if(next != std::string_view::npos)
      {
        words.emplace_back(str.substr(0, next));
        str.remove_prefix(next + 1);
      }
      else
      {
        words.emplace_back(str);
        break;
      }
    }
    return words;
}

int main()
{
    FileReader reader("D:\\UdemyMain\\c++\\Section20\\Challenge3DiscordSolution\\words.txt");
    
    if(!reader)
        return 1;
    
    WordCounter counter;
    
    while(!reader.atEnd())
       for(const auto& word : splitString(reader.nextLine(), ' '))
            counter.addWord(std::string(word), reader.currentLineNumber());
        
    std::cout << counter;
    
    return 0;
}