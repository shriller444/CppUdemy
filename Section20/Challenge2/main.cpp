#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <algorithm>
class Song;
void play_current_song(const Song & song);
class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
            
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}
void add_new_song(std::list<Song> &playlist, std::list<Song>::iterator &it){
    std::string name {};
    std::string artist {};
    int rating {};
    
    std::cout << "name : ";
    std::cin >> name;
    std::cout << "artist : ";
    std::cin >> artist;
    std::cout << "rating : ";
    std::cin >> rating;
    
    
    playlist.insert(it, Song {name,artist, rating});
    std::cout << "Added that fucking song mofo" << std::endl;
    std::cout << "Playing that song you just added " << std::endl;
    it--;
    play_current_song(*it);
}
void play_current_song(const Song &song) {
    std::cout << "Playing: " << std::endl;
    std::cout << song << std::endl;
        
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    for (auto &song: playlist){
        std::cout << song << std::endl;
    }
    
    std::cout << "Now playing: " <<std::endl << current_song << std::endl;
    


}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    
    
    char selection {};

    
    display_playlist(playlist, *current_song);
    
    do{
        display_menu();
        std::cin >> selection;
        selection = std::toupper(selection);
        
        if (selection == 'F'){
            auto it = playlist.begin();
            std::cout << "Playing first song" << std::endl;
            play_current_song(*it);
        }
        else if (selection == 'N'){
            current_song++; //increment to next free slot which if equal to .end() wraps round
            if (current_song == playlist.end()){ // if .end()
                current_song = playlist.begin();
            }
            
        
            std::cout << "Playing next song" << std::endl;
            play_current_song(*current_song);
        }
        else if (selection == 'P'){
          
            if (current_song == playlist.begin()){
                current_song = playlist.end(); // this returns the free  slot at the end 
            }
            current_song--; // decrement to get the correct song 
            
            
            
            std::cout << "Playing previous song" << std::endl;
            play_current_song(*current_song);
        }
        else if (selection == 'L'){
           display_playlist(playlist, *current_song);
        }
        else if (selection == 'A'){
            add_new_song(playlist, current_song);
        }
        else{
            std::cout << "invalid option entered" << std::endl;
        }
    } while (std::toupper(selection)!= 'Q');

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}