/*  
 * Square.h
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
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
    Square(double x =0, double y=0, double side_a=1, const char* name="Square");
    
    // Virtual methods that Rectangle will override
    virtual double area() const;
    virtual double perimeter() const;
    
    // Getters and setters
    double get_side() const;
    void set_side(double side_a);

    virtual void display() const;
};

#endif
