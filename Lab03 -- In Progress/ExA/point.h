/*  
 * Point.h
 * lab 3 Exercie A
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
 */

#ifndef POINT_H
#define POINT_H
class Point{
	private:
		double x,y;
		int id;
		static int count;// to track the number of points and auto-increment IDs
	
	public:
		Point(double xVal=0, double yVal=0);
		~Point();

		double getX() const;
		double getY() const;
		void setX(double xVal);
		void setY(double yVal);
		
		int getId() const;
		
		void display() const;
		double distance(const Point& other) const;
		static double distance(const Point& p1, const Point& p2);
		
		static int counter();  // Return count of objects
	
};
#endif
	
	