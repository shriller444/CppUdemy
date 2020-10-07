#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>
struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours
        { "gggggggggg",
            {
                {
                    "Colombia", { 
#
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
    std::cout << std::endl<< "1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl <<std::endl;
    const int length {tours.title.length()};
    const int spaceEitherSide {std::round((70-length)/2)};
    
    std::cout << std::setw((70  - 10 )/ 2) << "" << tours.title << std::endl;
//    std::cout<< std::setw(spaceEitherSide) << std::setfill(' ') << "" << std::setw(length) << tours.title << std::setw(spaceEitherSide) << std::setfill(' ') << "" << std::endl <<std::endl;
    
    std::cout << std::setw(20) << std::setfill(' ') <<std::left << "Country" << 
    std::setw(20) <<  std::left <<"City" << 
    std::setw(15) <<  std::left <<"Population" << 
    std::setw(15) <<  std::right <<"Cost" << std::endl;

    std::cout << std::setw(70) << std::setfill('-') << "" << std::endl;
    
    for(auto country : tours.countries) {   // loop through the countries
        std::cout << std::setfill(' ') << "" <<std::setw(20)<< std::left <<country.name;
        for(auto city : country.cities) {       // loop through the cities for each country
            if (city.name != country.cities[0].name){
                std::cout << std::setw(20)  << std::setfill(' ')<<"";
            }
                std::cout << std::setw(20) << std::left << city.name
                          << std::setw(15) <<std::left<< city.population 
                          << std::setw(15)<< std::right <<std::fixed << std::setprecision(2) <<city.cost 
                          << std::endl;
        }
    }

    std::cout << std::endl << std::endl;
    return 0;
}