#include "Movie.h"
#include <iostream>




Movie::Movie(std::string movieNameVal, std::string movieRatingVal, int watchedValVal)
    : movieName(movieNameVal), movieRating(movieRatingVal), watchedVal(watchedValVal){
    
  
    
}
Movie::Movie(const Movie &source)
    :Movie (source.movieName, source.movieRating, source.watchedVal){
        std::cout << "deep copy constructor called" << std::endl;
    
}


Movie::~Movie()
{
    
}

void Movie::display() const{
    std::cout << movieName << " , " << movieRating << " , " << watchedVal << std::endl;
}
