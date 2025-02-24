#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private :
		int					_rawValue;
		static const int	_fractionalBits = 8;
	public :
				Fixed();
				Fixed(const Fixed& fixed);
		Fixed&	operator=(const Fixed& fixed);
				~Fixed();
		int		getRawBits() const;
		void	setRawBits(const int raw);
				Fixed(const int i);
				Fixed(const float f);
		int		toInt() const;
		float	toFloat() const;
		bool	operator<(const Fixed& f) const;
		bool	operator>(const Fixed& f) const;
		bool	operator<=(const Fixed& f) const;
		bool	operator>=(const Fixed& f) const;
		bool	operator==(const Fixed& f) const;
		bool	operator!=(const Fixed& f) const;
		Fixed	operator+(const Fixed& f) const;
		Fixed	operator-(const Fixed& f) const;
		Fixed	operator*(const Fixed& f) const;
		Fixed	operator/(const Fixed& f) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif