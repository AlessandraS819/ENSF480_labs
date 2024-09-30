/*  
 * rectangle.cpp
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const std::string& name)
    : Square(side_a, x, y, name), side_b(side_b){}

// Correcting set_side_a to have a void return type
void Rectangle::set_side_a(double side_a) {
    this->side = side_a;  // Set the side of the square
}

// No need for a return value here
void Rectangle::set_side_b(double side_b) {
    this->side_b = side_b; // Set side_b
}

double Rectangle::get_side_a() const {
    return side; // Get the side of the square
}

double Rectangle::get_side_b() const {
    return side_b; // Return side_b
}

double Rectangle::area() const {
    return side * side_b; // Area calculation using both sides
}

double Rectangle::perimeter() const {
    return 2 * (side + side_b); // Perimeter calculation
}

void Rectangle::display() const {
    Square::display(); // Call the Square's display method
    std::cout << "Rectangle sides: " << get_side() << " and " << side_b << "\nArea: " << area() << "\nPerimeter: " << perimeter() << std::endl;
}
