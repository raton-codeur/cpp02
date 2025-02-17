#include "Fixed.hpp"

int main()
{
	Fixed a;
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;

	const Fixed	b(Fixed(5.05) * Fixed(2));
	std::cout << "b : " << b << std::endl;

	std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "b + 6 : " << b + 6 << std::endl;
}
