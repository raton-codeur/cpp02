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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif