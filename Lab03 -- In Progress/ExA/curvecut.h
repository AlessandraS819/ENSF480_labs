/*  
 * curvecut.h
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
*/

// curvecut.h

#ifndef CURVECUT_H
#define CURVECUT_H
#include <iostream>
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "shape.h"
#include "point.h"
#include <string.h>

class CurveCut: public Circle, Rectangle, Shape {
protected:
    /* no data members */
public:
    CurveCut(int x, int y, double radius, double side_a, double side_b, char* name = "Curvecut");
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    boolean validate_radius()const;
};

