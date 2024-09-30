/*  
 * circle.h
 * lab 1 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
*/

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"
#include "point.h"

class Circle : virtual public Shape {
protected:
    double radius;

public:
    Circle(double x = 0, double y = 0, double radius, const char* name = "Circle");
    void set_radius(double radius);  // Should return void
    double get_radius() const;
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    
};

#endif