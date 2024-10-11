/*  
 * curvecut.h
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
*/

#ifndef CURVECUT_H
#define CURVECUT_H
#include <iostream>
#include <string.h>
#include "rectangle.h"
#include "square.h"
#include "circle.h"
#include "shape.h"
#include "point.h"


class CurveCut: public Circle, public Rectangle{
protected:
    /* no data members */
public:
    CurveCut(double x, double y, double radius, double side_a, double side_b, const char* name = "Curvecut");
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    bool validate_radius()const;
};

#endif