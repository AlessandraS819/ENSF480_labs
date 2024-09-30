/*  
 * circle.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
*/

// Rectangle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : virtual public Shape {
protected:
    double radius;

public:
    Circle(double x = 0, double y = 0, double radius, const std::string& name = "Circle");
    void set_radius(double radius);  // Should return void
    double get_radius() const;
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    
};

#endif