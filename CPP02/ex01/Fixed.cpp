#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const int intNumb) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = intNumb << _fractionalBits;
}

Fixed::Fixed(const float floatNumb){
	std::cout << "Float constructor called" << std::endl;
	
	float	f = floatNumb * (float)(1 >> _fractionalBits);
	f = roundf(f);
	_rawBits = f;

}


Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(other);
}

Fixed &Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const{
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw){
	_rawBits = raw;
}

float	Fixed::toFloat(void) const{
	float	f;

	f = (getRawBits() / (float)(1 << _fractionalBits));
	return (f);
}

int		Fixed::toInt(void) const{
	float	i;

	i = getRawBits() >> _fractionalBits;
	return (i);
}

std::ostream& operator << (std::ostream& output, const Fixed &other){
	output << other.toFloat() ;
	return (output);
}
