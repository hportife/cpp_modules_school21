#include "Point.hpp"

//CONSTRUCTOR/DESTRUCTORS STAGE

Point::Point(void){}
Point::Point(Point const & tmp) : x(tmp.x), y(tmp.y){}
Point::Point(float const x, float const y) : x(x), y(y){}
Point::Point(Fixed const x, Fixed const y) : x(x), y(y){}
Point::~Point() {}

//GETTERS/SETTERS STAGE

Fixed Point::getX() const {return (x);}
Fixed Point::getY() const {return (y);}

//OPERATORS STAGE

Point Point::operator+(Point const& fl)
{
	Point pnt(x + fl.x, y + fl.y);
	return pnt;
}

Point Point::operator-(Point const& fl)
{
	Point pnt(x - fl.x, y - fl.y);
	return pnt;
}

Point Point::operator*(Point const& fl) {
	Point pnt(x * fl.x, y * fl.y);
	return pnt;
}

Point Point::operator/(Point const& fl) {
	Point pnt(x / fl.x, y / fl.y);
	return pnt;
}

//EXEC STAGE
