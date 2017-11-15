// Triangle.h
#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Line.h"

#include <cmath>
#include <iostream>
#include <string>

#define EQUILATERAL_TRIANGLE 1
#define ISOSCELES_TRIANGLE 2
#define RIGHT_TRIANGLE 4

class Triangle {
private:
	Line ab, bc, ca;
public:
	Triangle(const Point& _a, const Point& _b, const Point& _c);
	float perimeter() const;
	float area() const;
	int type() const;
	std::string toString() const;
};


#endif
