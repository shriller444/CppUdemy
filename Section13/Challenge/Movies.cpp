#include "Movies.h"
#include <vector>
#include <string>
#include <iostream>

void Movies::display(){
    for (const auto &movie: movies){
        movie.display();
    }
}

bool Movies::incrementWatched(std::string movieName){
    for (size_t i{}; i < movies.size(); i++){
        if (movies[i].getMovieName() == movieName){
            movies[i].incrementWatched();
            return true;
        }
    }
    return false;
}

bool Movies::addMovie(std::string movieName, std::string movieRating, int watchedVal){
    for (Movie &movie: movies){
        if (movie.getMovieName() == movieName){
            return false;
        }
    }
    Movie m (movieName, movieRating, watchedVal);
    movies.push_back(m);
    return true;
}

Movies::Movies()
{
}

Movies::~Movies()
{
}

