/*  
 * curvecut.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
*/

// curvecut.h

#ifndef CURVECUT_H
#define CURVECUT_H

#include "rectangle.h"
#include "circle.h"
#include "shape.h"
#include <string.h>

class CurveCut: public Circle, Rectangle, Shape 
{
protected:
    /* no data members */
public:
    CurveCut(int x, int y, double radius, double side_a, double side_b, char* name = "Curvecut");
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
    boolean validate_radius()const;
};

