/*  
 * rectangle.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */

#include "graphicsWorld.h"
#include "Point.h"
#include "Square.h"     
#include "Rectangle.h"
#include "Shape.h"
#include <iostream>

void GraphicsWorld::run() {
    std::cout << "Program by Muhammed Umar Khan" << std::endl;

    // Test for Point class:
    Point m(6, 8);
    Point n(6, 8);
    n.setX(9);
    std::cout << "\nExpected to display the distance between m and n is: 3";
    std::cout << "\nThe distance between m and n is: " << m.distance(n);
    std::cout << "\nExpected second version of the distance function also print: 3";
    std::cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
    
    // Test for Square class:
    std::cout << "\n\nTesting Functions in class Square:" << std::endl;
    Square s(5, 7, 12, "SQUARE - S");
    s.display();

    // Test for Rectangle class:
    std::cout << "\nTesting Functions in class Rectangle:" << std::endl;
    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();

    Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    b.display();

    double d = a.distance(b);
    std::cout << "\nDistance between rectangle a, and b is: " << d << std::endl;

    // Test copy constructor and assignment operator
    Rectangle rec1 = a; // copy constructor
    rec1.display();

    std::cout << "\nTesting assignment operator in class Rectangle:" << std::endl;
    Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
    rec2.display();
    rec2 = a; // assignment operator

    a.set_side_b(200);
    a.set_side_a(100);
    std::cout << "\nExpected to display the following values for object rec2:" << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n" 
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 12\n"
              << "Side b: 15\n"
              << "Area: 180\n"
              << "Perimeter: 54\n";
    rec2.display();

    std::cout << "\nTesting copy constructor in class Rectangle:" << std::endl;
    Rectangle rec3(a);  // copy constructor
    rec3.display();

    a.set_side_b(300);
    a.set_side_a(400);
    std::cout << "\nExpected to display the following values for object rec3:" << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n" 
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 100\n"
              << "Side b: 200\n"
              << "Area: 20000\n"
              << "Perimeter: 600\n";
    rec3.display();

    // Test for polymorphism:
    std::cout << "\nTesting array of pointers and polymorphism:" << std::endl;
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;

    for (int i = 0; i < 4; ++i) {
        sh[i]->display();  // Polymorphism in action
    }
}
