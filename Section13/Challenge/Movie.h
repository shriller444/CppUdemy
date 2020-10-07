#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie{
private:

    int watchedVal;
    std::string movieName;
    std::string movieRating;
public:

    //default constructor
    
    Movie(std::string movieNameVal, std::string movieRatingVal, int watchedValVal);
    
    // copy constructor
    
    Movie(const Movie &source);
    
    //destructor 
    ~Movie();
    
    int getWatchedVal(){return watchedVal;}
    std::string getMovieName(){return movieName;}
    std::string getMovieRating(){return movieRating;}
    
    void incrementWatched(){++watchedVal;}
    
    void display() const;
    

};

#endif // _MOVIE_H_
