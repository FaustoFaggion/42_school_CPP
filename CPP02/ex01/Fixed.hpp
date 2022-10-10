#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>

class Fixed {

	private:
		int					_rawBits;
		static const int	_fractionalBits;

	public:
		Fixed(void);
		Fixed(const int fixedPoint);
		Fixed(const float floatPoint);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed(void);

		int		getRawBits(void) const;

		void	setRawBits(int const raw);

		float	toFloat(void) const;

		int		toInt(void) const;
};

std::ostream& operator << (std::ostream& output, const Fixed &other);

#endif