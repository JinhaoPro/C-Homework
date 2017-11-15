#ifndef POINT_H_
#define POINT_H_

#include <string>

#define PI 3.1415926
#define FLOAT_LEN 15
#define PRECISION 0.000001

class Point {
protected:
	float x, y;
public:
	Point();
	Point(float _x, float _y);
	float getX() const;
	float getY() const;
	float length() const;
	Point operator+(const Point& _p) const;
	Point operator-(const Point& _p) const;
	void operator*(int i);
	float operator*(const Point& _p) const;
	void moveBy(float _x, float _y);
	void moveTo(float _x, float _y);
	bool perpendicularWith(const Point& _p) const;
	bool parallelWith(const Point& _p) const;
	virtual std::string toString() const;
};

#endif
