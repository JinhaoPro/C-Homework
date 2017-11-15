
#include "Point.h"

#include <cmath>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

Point::Point(): x(0), y(0) {}

Point::Point(float _x, float _y): x(_x), y(_y) {};

float Point::getX() const {return x;}

float Point::getY() const {return y;}

float Point::length() const {
	return sqrt(x * x + y * y);
}

Point Point::operator+(const Point& _p) const {
	Point p;
	p.x = this->x + _p.x;
	p.y = this->y + _p.y;
	return p;
}

Point Point::operator-(const Point& _p) const {
	Point p;
	p.x = this->x - _p.x;
	p.y = this->y - _p.y;
	return p;
}

void Point::operator*(int i) {
	x *= i;
	y *= i;
}

float Point::operator*(const Point& _p) const {
	return x * _p.y + y * _p.x;
}



void Point::moveBy(float _x, float _y) {
	x += _x;
	y += _y;
}

void Point::moveTo(float _x, float _y) {
	x = _x;
	y = _y;
}

// return string as (x, y)
std::string Point::toString() const {
	std::string s;
	char* buf = new char[FLOAT_LEN];
	s += "(";
	sprintf(buf, "%.2f", x);
	s += buf;
	sprintf(buf, "%.2f", y);
	s += ", ";
	s += buf;
	s += ")";
	delete buf;
	return s;
}

bool Point::parallelWith(const Point& _p) const {
	return abs(this->x * _p.y - this->y * _p.x) < PRECISION; 
}

bool Point::perpendicularWith(const Point& _p) const {
	return abs(abs(*(this) * _p) - 
			(this->length() * _p.length())) < PRECISION;
}
