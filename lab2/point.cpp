/*  
 * Point.cpp
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

int Point::count = 1001;

Point::Point(double xVal, double yVal) : x(xVal), y(yVal) {
    id = count++;
}

Point::~Point() {}

void Point::setX(double xVal) { x = xVal; }
void Point::setY(double yVal) { y = yVal; }

int Point::getId() const { return id; }

void Point::display() const {
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}

double Point::distance(const Point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

double Point::distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int Point::counter() {
    return count - 1001;  // Return the total number of objects created
}
