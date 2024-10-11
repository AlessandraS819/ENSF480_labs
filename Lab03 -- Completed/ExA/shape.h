/*  
 * Shape.h
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */


#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape {
protected:
    Point origin; // Assuming origin contains x and y
    char* shapeName;

public:
    Shape( double xVal, double yVal, const char* name);
    virtual ~Shape();  // Virtual destructor for polymorphism

    const Point& getOrigin() const;
    char* getName() const;

    virtual void move(double dx, double dy);
    
    // Add accessors for coordinates
    double getX() const { return origin.getX(); } // Assuming Point has getX()
    double getY() const { return origin.getY(); } // Assuming Point has getY()

    virtual void display() const;
    double distance(const Shape& other) const;
    static double distance(const Shape& s1, const Shape& s2);
};

#endif