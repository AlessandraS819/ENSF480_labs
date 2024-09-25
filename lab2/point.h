/*  
 * Point.h
 * lab 2 Exercie B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 23, 2024
 */

#ifndef POINT_H
#define POINT_H
class Point{
	private:
		double x,y;
		int id;
		static int count;// to track the number of points and auto-increment IDs
	
	public:
		Point(double xVal, double yVal);
		~Point();

		double getX() const { return x; }
		double getY() const { return y; }
		void setX(double xVal);
		void setY(double yVal);
		
		int getId() const;
		
		void display() const;
		double distance(const Point& other) const;
		static double distance(const Point& p1, const Point& p2);
		
		static int counter();  // Return count of objects
	
}
	
	