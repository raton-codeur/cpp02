#include "Point.hpp"

Fixed crossProduct(const Point& a, const Point& b, const Point& c)
{
    return (b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX());
}

bool bsp(const Point a, const Point b, const Point c, const Point p)
{
	Fixed cp1(crossProduct(a, b, p));
	Fixed cp2(crossProduct(b, c, p));
	Fixed cp3(crossProduct(c, a, p));
	return (cp1 > 0 && cp2 > 0 && cp3 > 0) || (cp1 < 0 && cp2 < 0 && cp3 < 0);
}
