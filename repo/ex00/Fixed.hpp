#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

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
};

#endif