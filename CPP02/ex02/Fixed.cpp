#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _rawBits(0) {

}

Fixed::Fixed(const int intNumb) {
	_rawBits = intNumb << _fractionalBits;
}

Fixed::Fixed(const float floatNumb) {
	float	f = floatNumb * (float)(1 << _fractionalBits);
	f = roundf(f);
	_rawBits = f;

}

Fixed::Fixed(const Fixed& other){
	Fixed::operator=(other);
}

Fixed::~Fixed(void){
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

int	Fixed::toInt(void) const{
	float	i;

	i = getRawBits() >> _fractionalBits;
	return (i);
}

Fixed &Fixed::operator=(const Fixed& other) {
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs) const {
	return (_rawBits > rhs.getRawBits() ? true : false);
}

bool	Fixed::operator<(const Fixed& rhs) const {
	return (_rawBits < rhs.getRawBits() ? true : false);
}
		
bool	Fixed::operator>=(const Fixed& rhs) const {
	return (_rawBits >= rhs.getRawBits() ? true : false);
}

bool	Fixed::operator<=(const Fixed& rhs) const {
	return (_rawBits <= rhs.getRawBits() ? true : false);
}
bool	Fixed::operator==(const Fixed& rhs) const {
	return (_rawBits == rhs.getRawBits() ? true : false);
}
bool	Fixed::operator!=(const Fixed& rhs) const {
	return (_rawBits != rhs.getRawBits() ? true : false);
}

Fixed	Fixed::operator+(const Fixed& rhs) {
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed& rhs) {
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed& rhs) {
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed& rhs) {
	return (this->toFloat() / rhs.toFloat());
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	this->_rawBits++;
	return (temp);
}

Fixed&	Fixed::operator++(void) {
	++this->_rawBits;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);

	this->_rawBits--;
	return (temp);
}

Fixed&	Fixed::operator--(void) {
	this->_rawBits--;
	return (*this);
}

std::ostream& 	operator << (std::ostream& lhs, const Fixed &rhs){
	lhs << rhs.toFloat() ;
	return (lhs);
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {
	return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

Fixed const	&Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
};

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {
	return (lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs);
}

Fixed const	&Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs);
};