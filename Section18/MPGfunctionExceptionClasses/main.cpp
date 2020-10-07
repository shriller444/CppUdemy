/*

user defined exceptions

- we can create exception classes and throw instances of those classes

best practice 
 - throw an object -> NOT primitive typedef
 
 - throw the object by value
 
 - catch the object by reference or Const reference. 
 
 */
#include <iostream>

class DivideByZeroException {
};
class NegativeValueException {
};

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw DivideByZeroException();
    else if (miles < 0 || gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles) / gallons;
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
        miles_per_gallon = calculate_mpg(miles, gallons); // could throw an exception
        std::cout << "Result: " << miles_per_gallon << std::endl;
    } catch (const DivideByZeroException &ex) { // catches this class object &ex as const
        std::cerr << "Sorry, you can't divide by zero" << std::endl;
    } catch (const NegativeValueException &ex) { // catches this other class object. const ref used if members and attributes were added can be accessed. 
        std::cerr << "Sorry, one of your parameters is negative" << std::endl;
    }
    std::cout << "Bye" << std::endl; // Bye

    return 0;
}

