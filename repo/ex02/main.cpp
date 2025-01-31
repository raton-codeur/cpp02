#include "Fixed.hpp"

static void printBits(int n)
{
    for (int i = 31; i >= 0; i--)
	{
        std::cout << ((n >> i) & 1);
        if (i % 4 == 0)
			std::cout << " ";
		if (i % 8 == 0)
			std::cout << std::endl;
		if (i == 8)
			std::cout << "---------" << std::endl;
    }
}

int main()
{
	Fixed		a;
	const Fixed	b(10);
	const Fixed	c(42.42f);
	const Fixed	d(b);
	a = Fixed(1234.4321f);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;

	std::cout << "a as int : " << a.toInt() << std::endl;
	std::cout << "b as int : " << b.toInt() << std::endl;
	std::cout << "c as int : " << c.toInt() << std::endl;
	std::cout << "d as int : " << d.toInt() << std::endl;

	Fixed e(2);
	printBits(e.getRawBits());
	Fixed f(2.5);
	printBits(f.getRawBits());
}
