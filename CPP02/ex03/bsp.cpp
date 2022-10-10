#include "Point.hpp"

bool	bsp(Point& a, Point& b, Point& c, Point& p) {
	Fixed	w1;
	Fixed	w2;

	w1 = (a.getPointX() * (c.getPointY() - a.getPointY()) + (p.getPointY()
		- a.getPointY()) * (c.getPointX() - a.getPointX()) - p.getPointX()
		* (c.getPointY() - a.getPointY())) / ((b.getPointY() - a.getPointY())
		* (c.getPointX() - a.getPointX()) - (b.getPointX() - a.getPointX())
		*(c.getPointY() - a.getPointY()));

	w2 = (p.getPointY() - a.getPointY() - w1 * (b.getPointY() - a.getPointY()))
		/ (c.getPointY() - a.getPointY());

	if (w1 >= 0 && w2 >= 0 && w1 + w2 <= 1)
		return (true);
	else
		return (false);
}