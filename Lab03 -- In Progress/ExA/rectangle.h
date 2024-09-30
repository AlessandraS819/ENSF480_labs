/*  
 * rectangle.h
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */

// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Square.h"

class Rectangle : public Square {
protected:
    double side_b;

public:
    Rectangle(double x = 0, double y = 0, double side_a = 1, double side_b = 1, const char* name = "Rectangle");
    void set_side_a(double side_a);  // Should return void
    void set_side_b(double side_b);
    double get_side_a() const;
    double get_side_b() const;
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    double side_a; // Consider removing this if it's unnecessary
};

#endif