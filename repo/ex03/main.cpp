#include "Point.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

static void test(const Point& a, const Point& b, const Point& c, const Point& p)
{
	if (bsp(a, b, c, p))
		std::cout << GREEN << p << " is inside ABC" << RESET << std::endl;
	else
		std::cout << RED << p << " is outside ABC" << RESET << std::endl;
}

int main()
{
	const Point a(0, 0);
	const Point b(1, 0);
	const Point c(1, 1);

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	std::cout << "C = " << c << std::endl;

	test(a, b, c, Point(3, 3));
	test(a, b, c, Point(0.5, 0.5));
	test(a, b, c, Point(0.5, 0.25));
}
