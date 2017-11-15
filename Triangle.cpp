// Triangle.cpp
#include "Triangle.h"

#include <cmath>
#include <cstdlib>

Triangle::Triangle(const Point& _a, const Point& _b, const Point& _c) {
	ab = Line(_a, _b);
	bc = Line(_b, _c);
	ca = Line(_c, _a);
}

float Triangle::perimeter() const {
	return ab.length() + bc.length() + ca.length();
}

float Triangle::area() const {
	return abs(ab.vector() * bc.vector() / 2);
}

int Triangle::type() const {
	int type = 0;
	// equilateral triangle plus 1.
	if (abs(ab.length() - bc.length()) < PRECISION && abs(bc.length() - ca.length()) < PRECISION) {
		type += 1;
		std::cout << "Eauilatetal_Triangle.\t";
	}
	// siosceles triangle plus 2
	if ((ab.length() - bc.length()) < PRECISION || abs(ab.length() - ca.length()) < PRECISION || abs(bc.length() - ca.length()) < PRECISION ) {
		type += 2;
		std::cout << "Siosceles_Triangle.\t";
	} 
	// right triangle plus 4
	if ( ab.perpendicularWith(bc) || bc.perpendicularWith(ca) || ca.perpendicularWith(ab)) {
		type += 4;
		std::cout << "Right_Triangle.\t";
	}
	return type;
}

std::string Triangle::toString() const {
	std::string s;
	s += "(";
	s += ab.getA().toString();
	s += "->";
	s += bc.getA().toString();
	s += "->";
	s += ca.getA().toString();
	s += ")";
	return s;
}

