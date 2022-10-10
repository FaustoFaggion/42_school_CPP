#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

	private:
		Fixed	x;
		Fixed	y;

	public:
	Point(void);
	Point(float x, float y);
	Point(const Point& other);
	~Point(void);
	Fixed	getPointX(void);
	Fixed	getPointY(void);
};

std::ostream& operator << (std::ostream& lhs, Point &rhs);

bool	bsp(Point& a, Point& b, Point& c, Point& p);

#endif