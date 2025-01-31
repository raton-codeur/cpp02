#include "Fixed.hpp"

Fixed::Fixed() : _rawValue(0)
{
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) :
	_rawValue(fixed._rawValue)
{
	std::cout << "copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "copy assignment operator called" << std::endl;
	_rawValue = fixed._rawValue;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return _rawValue;
}

void Fixed::setRawBits(int const raw)
{
	_rawValue = raw;
}
