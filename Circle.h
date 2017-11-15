// Circle.h
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Point.h"

#include <string>


class Circle: public Point {
protected:
	float r;
public:
	Circle(const Point& _p, float _r);
	float area() const;
	float perimeter() const;
	std::string toString() const;
};

#endif
