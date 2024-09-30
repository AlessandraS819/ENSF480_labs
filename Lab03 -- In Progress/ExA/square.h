/*  
 * Square.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */

#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>
#include "Shape.h"

class Square : virtual public Shape {
protected:
    double side;  // Keep only the side variable

public:
    Square(double side_a, double x, double y, std::string name);
    
    // Virtual methods that Rectangle will override
    virtual double area() const;
    virtual double perimeter() const;
    
    // Getters and setters
    double get_side() const;
    void set_side(double side_a);

    virtual void display() const;
};

#endif
