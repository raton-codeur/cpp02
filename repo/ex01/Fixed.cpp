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

void Fixed::setRawBits(const int raw)
{
	_rawValue = raw;
}

Fixed::Fixed(const int i) : _rawValue(i << _fractionalBits)
{
	std::cout << "constructor with int called" << std::endl;
}

Fixed::Fixed(const float f) : _rawValue(roundf(f * (1 << _fractionalBits)))
{
	std::cout << "constructor with float called" << std::endl;
}

int Fixed::toInt() const
{
	return _rawValue >> _fractionalBits;
}

float Fixed::toFloat() const
{
	return (float)_rawValue / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
