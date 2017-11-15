#ifndef LINE_H_
#define LINE_H_

#include "Point.h"
#include <string>

class Line {
protected:
	Point a, b;
public:
	Line();
	Line(const Point& _a, const Point& _b);
	const Point& getA() const;
	const Point& getB() const;
	float length() const;
	std::string toString() const;
	Point vector() const;
	float operator*(const Line&) const;
	bool parallelWith(const Line&) const;
	bool perpendicularWith(const Line&) const;
};

#endif
