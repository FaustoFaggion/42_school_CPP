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
		~Fixed(void);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		
		float				toFloat(void) const;
		int					toInt(void) const;
		
		Fixed& 				operator=(const Fixed& rhs);
		bool				operator>(const Fixed& rhs) const;
		bool				operator<(const Fixed& rhs) const;
		bool				operator>=(const Fixed& rhs) const;
		bool				operator<=(const Fixed& rhs) const;
		bool				operator==(const Fixed& rhs) const;
		bool				operator!=(const Fixed& rhs) const;
		Fixed				operator+(const Fixed& rhs);
		Fixed				operator-(const Fixed& rhs);
		Fixed				operator*(const Fixed& rhs);
		Fixed				operator/(const Fixed& rhs);
		Fixed				operator++(int);
		Fixed&				operator++(void);
		Fixed				operator--(int);
		Fixed&				operator--(void);


		static Fixed		&min(Fixed &lhs, Fixed &rhs);
		static Fixed const	&min(const Fixed &lhs, const Fixed &rhs);
		static Fixed		&max(Fixed &lhs, Fixed &rhs);
		static Fixed const	&max(const Fixed &lhs, const Fixed &rhs);
};

std::ostream& operator << (std::ostream& lhs, const Fixed &rhs);

#endif