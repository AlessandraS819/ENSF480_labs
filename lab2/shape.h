/*  
 * Shape.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */


#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape {
private:
    Point origin; // Assuming origin contains x and y
    char* shapeName;

public:
    Shape(const char* name, double xVal, double yVal);
    virtual ~Shape();  // Virtual destructor for polymorphism

    const Point& getOrigin() const;
    const char* getName() const;

    void move(double dx, double dy);
    
    // Add accessors for coordinates
    double getX() const { return origin.getX(); } // Assuming Point has getX()
    double getY() const { return origin.getY(); } // Assuming Point has getY()

    virtual void display() const;
    double distance(const Shape& other) const;
    static double distance(const Shape& s1, const Shape& s2);
};

#endif