#include <iostream>


using namespace std;

//Function Protoypes enable the order of functions to not matter which is fucking useful 
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double); // only needs to know the type but leave for documentation
void area_circle(); // if its used in the program not in this manner like using an integer it will break as its not what it expected. 
void volume_cylinder();


int main(){
    
    area_circle();
    volume_cylinder();
    
    return 0;
}


const double pi {3.14159};

double calc_area_circle(double radius){
    return pi * radius * radius;
    
}

double calc_volume_cylinder(double radius, double height){
    return calc_area_circle(radius) * height;
}

void area_circle(){
    double radius {};
    
    cout << "\nRadius: ";
    cin >> radius;
    
    cout << "Area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}


void volume_cylinder(){
    double radius {};
    double height {};
    
    cout << "\nRadius: ";
    cin >> radius;
    
    cout << "\nHeight: ";
    cin >> height;
    
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}