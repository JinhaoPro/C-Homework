// Circle.cpp
#include "Circle.h"

#include <iostream>
#include <cstdio>

Circle::Circle(const Point& _p, float _r): Point(_p) {
	r = _r;
}

float Circle::area() const {
	return PI * r * r;
}

float Circle::perimeter() const {
	return PI * 2 * r;
}

std::string Circle::toString() const {
	std::string s;
	s += "(";
	s += Point::toString();
	s += ", ";
	char* buf = new char[FLOAT_LEN];
	sprintf(buf, "%.2f", r);
	s += buf;
	s += ")";
	delete [] buf;
	return s;
}
