/*
 
  throw by value and catch by reference

 */
   
#include <iostream>

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0) // prevent divide by zero error
        throw 0; // throws 0 
    return static_cast<double>(miles) / gallons; // cant be negative 
}

int main() {    
    int miles {};
    int gallons {};
    double miles_per_gallon {};   
    
    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;
    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl;
    }
    catch (int &ex) { // catches the thrown zero exception and displays 
        std::cerr << "Tried to divide by zero" << std::endl; // cerr is standard for error messages on the output stream.
    }
    std::cout << "Bye" << std::endl;

    return 0;
}

