#include "Point.hpp"

Point::Point(void) {
}

Point::Point(const Point& other){
	this->x = other.x;
	this->y = other.y;
}

Point::Point(float x, float y) {
	this->x = Fixed (x);
	this->y = Fixed (y);
}

Point::~Point(void){

}

Fixed	Point::getPointX(void) {
		return (this->x);
}

Fixed	Point::getPointY(void) {
		return (this->y);
}

std::ostream& 	operator << (std::ostream& lhs, Point& rhs) {
	lhs << "(" << rhs.getPointX() << ", " << rhs.getPointY() << ")" << std::endl;
	return (lhs);
}
