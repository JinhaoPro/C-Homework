#include "Quadrangle.h"

#include <iostream>

Quadrangle::Quadrangle(const Point& _a, const Point& _b,const Point& _c,const Point& _d) {
	ab = Line(_a, _b);
	bc = Line(_b, _c);
	cd = Line(_c, _d);
	da = Line(_d, _a);
}

float Quadrangle::area() const {
	return ab * bc / 2 + cd * da / 2;
}

float Quadrangle::perimeter() const {
	return ab.length() + bc.length() + cd.length() + da.length();
}

int Quadrangle::type() const {
	int type = 0;
	// rectangular, plus 1
	if (ab.parallelWith(cd) && bc.parallelWith(da) && ab.perpendicularWith(bc)) {
		type += 1;
		std::cout << "Rectangular.\t";
	}
	// square, plus 2;
	if (ab.length() == bc.length() && ab.length() == cd.length()
			&& ab.length() == da.length() && ab.perpendicularWith(bc)) {
		type += 2;
		std::cout << "Square.\t";
	}
	// rhombus, plus 4;
	if (ab.length() == bc.length() && ab.length() == cd.length()
			&& ab.length() == da.length()) {
		type += 4;
		std::cout << "Rhombus";
	}
}

std::string Quadrangle::toString() const {
	std::string s;
	s += "(";
	s += ab.getA().toString();
	s += "->";
	s += bc.getA().toString();
	s += "->";
	s += cd.getA().toString();
	s += "->";
	s += da.getA().toString();
	s += ")";
	return s;
}
