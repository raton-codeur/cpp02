#include "Fixed.hpp"

Fixed::Fixed() : _rawValue(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "copy constructor called" << std::endl;
	*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "copy assignment operator called" << std::endl;
	_rawValue = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawValue;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_rawValue = raw;
}
