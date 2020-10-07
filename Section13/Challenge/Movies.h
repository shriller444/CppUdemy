#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>
#include <string>

class Movies{
    
private:
    std::vector <Movie> movies;
public:

    void display();
    bool addMovie(std::string movieName, std::string movieRating, int watchedVal);
    bool incrementWatched(std::string movieName);
    
    // default no args constructor
    Movies();
    
    // destructor 
    ~Movies();

};

#endif // _MOVIES_H_
