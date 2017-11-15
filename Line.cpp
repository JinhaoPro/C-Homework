#include "Line.h"

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

Line::Line() = default;

Line::Line(const Point& _a, const Point& _b) {
	a = Point(_a);
	b = Point(_b);
}

const Point& Line::getA() const {
	return a;
}

const Point& Line::getB() const {
	return b;
}

float Line::length() const {
	Point temp = a - b;
	return temp.length();
}

std::string Line::toString() const {
	std::string s;
	s += "(";
	s += a.toString();
	s += ", ";
	s += b.toString();
	s += ")";
	return s;
}

Point Line::vector() const {
	return b - a;
}

float Line::operator*(const Line& _l) const {
	return this->vector() * _l.vector();
}

bool Line::parallelWith(const Line& _l) const {
	return this->vector().parallelWith(_l.vector()); 
}

bool Line::perpendicularWith(const Line& _l) const {
	return this->vector().perpendicularWith(_l.vector());
}
