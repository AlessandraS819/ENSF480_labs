
#include <iostream>
/*  
 * circle.cpp
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */
#include <string>
#include "circle.h"
#include "point.h"
#include <cmath> // for using M_PI constant
using namespace std;

Circle::Circle(double x = 0, double y = 0, double radius, const char* name = "Circle"): Shape(x, y, name), radius(radius) {}
	
	
double Circle::area() const {
    double area = M_PI * pow(radius, 2);
    return area;   // Calculate area
}

// Perimeter calculation aka circumference
double Circle::perimeter() const {
  double circumference = 2 * M_PI * radius;
  return circumference;  
}

// Getter for side length
double Circle::get_radius() const {
    return radius;  // Return side length
}

// Setter for side length
void Circle::set_radius(double radius) {
    this->radius = radius;  // Set side length
}

// Display method
void Circle::display() const {
    std::cout << "Square Name: " << getName() << std::endl;  // Access 'name' via getter
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl; // Access 'x' via Point
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl; // Access 'y' via Point
    std::cout << "Radius: " << radius << std::endl;         // Display side length
    std::cout << "Area: " << area() << std::endl;       // Display area
    std::cout << "Perimeter: " << perimeter() << std::endl; // Display perimeter
}
