#include "Point.hpp"

Point::Point() : _x(Fixed()), _y(Fixed())
{
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Point::Point(const Point& point) : _x(point._x), _y(point._y)
{
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Point& Point::operator=(const Point& point)
{
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
	std::cerr << "warning : copy assignment operator called for a Point instance. its values won't change." << std::endl;
	(void)point;
	return *this;
}

Point::~Point()
{
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p.getX() << ", " << p.getY() << ")";
	return os;
}
