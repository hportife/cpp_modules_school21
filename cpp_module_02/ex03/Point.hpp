#ifndef CPP_MODULE_02_POINT_HPP
#define CPP_MODULE_02_POINT_HPP
#include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(Point const & tmp);
	Point(float const x, float const y);
	Point(Fixed const x, Fixed const y);

	~Point(void);

	Fixed getX(void) const;
	Fixed getY(void) const;

	Point const& operator=(Point const& fl);
	Point operator+(Point const& fl);
	Point operator-(Point const& fl);
	Point operator*(Point const& fl);
	Point operator/(Point const& fl);
private:
	Fixed const	x;
	Fixed const	y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //CPP_MODULE_02_POINT_HPP
