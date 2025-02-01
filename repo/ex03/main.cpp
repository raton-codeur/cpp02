#include "Point.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

static void testPoint(const Point& a, const Point& b, const Point& c, const Point& p)
{
	if (bsp(a, b, c, p))
		std::cout << GREEN << p << " is strictly inside ABC" << RESET << std::endl;
	else
		std::cout << RED << p << " is outside ABC (or on its boundary)" << RESET << std::endl;
}

int main()
{
	const Point a(-1.24, 0.52);
	const Point b(4.7, 3.26);
	const Point c(1.28, -3.04);

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	std::cout << "C = " << c << std::endl;

	/* inside */
	testPoint(a, b, c, Point(2.5, 1.56));
	testPoint(a, b, c, Point(1.58, -2.12));
	testPoint(a, b, c, Point(-0.18, 0.7));

	/* outside */
	testPoint(a, b, c, Point(3, 7));
	testPoint(a, b, c, Point(5.001, -0.26));
	testPoint(a, b, c, Point(-0.22, -1.64));

	/* boundary */
	testPoint(a, b, c, Point(4.7, 3.26));
	testPoint(Point(0, 0), Point(1, 0), Point(1, 1), Point(0.5, 0.5));
}
