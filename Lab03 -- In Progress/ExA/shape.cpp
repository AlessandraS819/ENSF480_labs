/*  
 * Square.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */


#include <iostream>
/*  
 * Shape.cpp
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */
#include <string>
#include "shape.h"
#include "point.h"
#include <cmath>
using namespace std;

Shape::Shape(int x, int y, char*s){
	origin.set_x(x);
	origin.set_y(y);
	size_t length =strlen(s);
	shapeName= new char[length +1];
	strcpy(shapeName, s)
}
Shape::~Shape()
{
  delete[] shapeName;
}
	
char* Shape::getName()const {return *shapeName};

char* Shape::get_x()const {return origin.get_x()};

char* Shape::get_y()const {return origin.get_y()};

double Shape::distance(Shape &other){
	double x_squared = pow(other.origin.x, 2);
	double y_sqared = pow(other.origin.y, 2);
	double sum = x_squared + y_sqared;
	double distance = sqrt(sum);
	return distance;
}
static double Shape:: distance(Shape& the_shape, Shape& other){
	
}

virtual void Shape:: move(double dx, double dy){
	origin.set_x(origin.x + dx);
    origin.set_y(origin.y + dy);
	
}// virtual function

virtual void Shape::display() const{
	std::cout << "Square Name: " << getName() << std::endl;  // Access name using getName()
    std::cout << "X-coordinate: " << getX() << std::endl;    // Access x using getX()
    std::cout << "Y-coordinate: " << getY() << std::endl;    // Access y using getY()
}// virtual funciton