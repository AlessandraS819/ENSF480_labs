/*  
 * Square.cpp
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */


#include <iostream>
#include <string>
#include "shape.h"
#include "point.h"
#include "square.h"
using namespace std;


// Constructor for Square class
Square::Square( double x, double y,double side_a, const char* name)
    :Shape(x, y, name), side(side_a) { }  // Correctly initialize base class

// Area calculation
double Square::area() const {
    return side * side;  // Calculate area
}

// Perimeter calculation
double Square::perimeter() const {
    return 4 * side;  // Calculate perimeter
}

// Getter for side length
double Square::get_side() const {
    return side;  // Return side length
}

// Setter for side length
void Square::set_side(double side_a) {
    this->side = side_a;  // Set side length
}

// Display method
void Square::display() const {
    std::cout << "Square Name: " << getName() << std::endl;  // Access 'name' via getter
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl; // Access 'x' via Point
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl; // Access 'y' via Point
    std::cout << "Side: " << side << std::endl;         // Display side length
    std::cout << "Area: " << area() << std::endl;       // Display area
    std::cout << "Perimeter: " << perimeter() << std::endl; // Display perimeter
}

