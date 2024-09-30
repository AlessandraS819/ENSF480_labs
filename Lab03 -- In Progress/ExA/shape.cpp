/*  
 * Shape.cpp
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */
#include <iostream>
#include <cstring>
#include <cmath>
#include "shape.h"
#include "point.h"

using namespace std;

Shape::Shape(double xVal, double yVal, const char* name){
	origin.setX(xVal);
	origin.setY(yVal);
	size_t length =strlen(name);
	shapeName = new char[length +1];
	strcpy(shapeName, name);
}
Shape::~Shape()
{
  delete[] shapeName;
}
	
char* Shape::getName()const {return shapeName;};

double Shape::getX()const {return origin.getX();};

double Shape::getY()const {return origin.getY();};

double Shape::distance(const Shape &other) const{
	double x_squared = pow(other.origin.getX(), 2);
	double y_sqared = pow(other.origin.getY(), 2);
	double sum = x_squared + y_sqared;
	double distance = sqrt(sum);
	return distance;
}
static double Shape:: distance(const Shape& the_shape, const Shape& other){
	
}

virtual void Shape::move(double dx, double dy){
	origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
	
}// virtual function

virtual void Shape::display() const{
	std::cout << "Square Name: " << getName() << std::endl;  // Access name using getName()
    std::cout << "X-coordinate: " << getX() << std::endl;    // Access x using getX()
    std::cout << "Y-coordinate: " << getY() << std::endl;    // Access y using getY()
}// virtual function
