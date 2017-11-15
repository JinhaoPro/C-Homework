#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Triangle.h"
#include "Quadrangle.h"

#include <iostream>
#include <iomanip>

int main() {
	// test Point.
	std::cout << std::endl;
	std::cout << "======== Point Test ========" << std::endl;
	Point p1(3, 4);
	Point p2(4, 3);
	std::cout << "Point 1: " << p1.toString() << std::endl;
	std::cout << "Point 2: " << p2.toString() << std::endl;
	std::cout << std::endl << std::endl;
	// test Line.
	std::cout << "======== Line Test ========" << std::endl;
	Line l1(p1, p2);
	std::cout << "Line 1: " << l1.toString() << "\t length: " << l1.length() << std::endl;
	std::cout << std::endl << std::endl;
	// test Circle.
	std::cout << "======== Circle Test ========" << std::endl;
	Circle c1(p1, 5);
	std::cout << "Circle 1: " << c1.toString() << "\t";
	std::cout << "Area: " << c1.area() << "\t";
	std::cout << "Perimeter: " << c1.perimeter() << std::endl;
	c1.moveBy(2, 3);
	std::cout << "Circle 1 after move by (2, 3): " << c1.toString() << std::endl;
	std::cout << std::endl << std::endl;
	// test triangle
	std::cout << "======== Triangle Test ========" << std::endl;
	Triangle t1(Point(0, 0), Point(0, 4), Point(3, 0));	
	std::cout << "Triangle: " << t1.toString();
	std::cout << "\nType: ";
	t1.type();
	std::cout << std::endl << "Area: " << t1.area() << "\tPeremeter: " << t1.perimeter();
	std::cout << std::endl << std::endl;
	// test quadrangle
	std::cout << "======== Quadrangle Test ========" << std::endl;
	Quadrangle q1(Point(0, 0), Point(2, 0), Point(2, 2), Point(0, 2));
	std::cout << "Quadrangle: " << q1.toString();
	std::cout << "\tArea: " << q1.area() << "\t Perimeter: " << q1.perimeter() << std::endl << "Type:\t";
	q1.type();
	std::cout << std::endl;

	Quadrangle q2(Point(1, 1), Point(1, -1), Point(-1, -1), Point(-1, 1));
	std::cout << "Quadrangle: " << q2.toString();
	std::cout << "\tArea: " << q2.area() << "\t Perimeter: " << q2.perimeter() << std::endl << "Type:\t";
	q2.type();
	std::cout << std::endl;

	Quadrangle q3(Point(2, 0), Point(0, 4), Point(-2, 0), Point(0, -4));
	std::cout << "Quadrangle: " << q3.toString();
	std::cout << "\tArea: " << q3.area() << "\t Perimeter: " << q3.perimeter() << std::endl << "Type:\t";
	q3.type();
	std::cout << std::endl;
	std::cout << std::endl << std::endl;

	return 0;
}
