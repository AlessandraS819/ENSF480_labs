#include <iostream>
/*  
 * curvecut.cpp
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */
#include <string>
#include <cmath>
#include <iostream>
#include "shape.h"
#include "curvecut.h"
#include "circle.h"
#include "rectangle.h"
#include "point.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double radius, double side_a, double side_b, const char* name = "Curvecut"): 
Circle(x, y, radius, name), Rectangle(x, y, side_a, side_b, name), Shape(x, y,name) {;}

bool CurveCut:: validate_radius()const{
    if (radius > side_a || radius > side_b){
        cout <<"radius is not valid. It is bigger than the width and lenght of the rectangle"<<endl;
        exit(1);
    }
    else{return true;}
}
virtual double CurveCut:: area() const{
    if (validate_radius()){
        double rectangleArea = side_a* side_b;
        double quarterCircleArea = (M_PI * std::pow(radius, 2)) / 4;
        return rectangleArea - quarterCircleArea;
    }
    
}
virtual double CurveCut :: perimeter()const{
    if(validate_radius()){
        double threeSides = side_a + (side_b - radius) + side_a;
        double quarterCirclePerimeter = (M_PI * radius) / 2;
        return threeSides + quarterCirclePerimeter;
    }
    
}

virtual void CurveCut::display() const{
    if(validate_radius()){
        std::cout << "CurveCut Name: " << getName() << std::endl;  // Access 'name' via getter
        std::cout << "X-coordinate: " << getOrigin().getX() << std::endl; // Access 'x' via Point
        std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl; // Access 'y' via Point
        std::cout << "Radius: " << radius << std::endl;         // Display side length
        std::cout << "Width: " << side_a << std::endl; 
        std::cout << "Length: " << side_b << std::endl; 
        std::cout << "Area: " << area() << std::endl;       // Display area
        std::cout << "Perimeter: " << perimeter() << std::endl; // Display perimeter
    }
}