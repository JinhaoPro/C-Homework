#ifndef QUADRANGLE_H_
#define QUADRANGLE_H_

#include "Point.h"
#include "Line.h"

class Quadrangle {
protected:
	Line ab, bc, cd, da;
public:
	Quadrangle(const Point&, const Point&, const Point&, const Point&);
	float area() const;
	float perimeter() const;
	std::string toString() const;
	int type() const;	
};


#endif
