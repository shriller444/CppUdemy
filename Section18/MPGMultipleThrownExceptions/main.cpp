/*

throwing mulitple exception from a function

zero error / negative error for MPG code. 

creates catch handlers for each data type that could be thrown as an exception to be caught 

can be catch(...){ - catches all exceptions.
    }
    
    */
    
#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw 0; // throws int as value
    if (miles <0 || gallons < 0)
        throw std::string{"Negative value error"}; // throws string as value
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
    try { // could produce a zero or negative error 
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result: " << miles_per_gallon << std::endl; 
    }
    // always catch by reference. 
    catch (int &ex) {
        std::cerr << "Tried to divide by zero" << std::endl; //catches potential integer exception 
    }
    catch (std::string &ex) {
        std::cerr << ex << std::endl; // catches potential stirng exception 
    }
    std::cout << "Bye" << std::endl;

    return 0;
}

