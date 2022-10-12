#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong Animal default constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : type(type) {
	std::cout << "Wrong Animal constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rsc) {
	std::cout << "Wrong Animal copy constructor called!!" << std::endl;
	*this = rsc;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructor called!!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

std::string const	&WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::setType(std::string const type) {
	this->type = type;
} 

void	WrongAnimal::makeSound() {
	std::cout << "Wrong Animal Sound!!" << std::endl;
}

std::ostream&	operator<<(std::ostream &lhs, WrongAnimal &rhs) {
	lhs << rhs.getType();
	return (lhs);
}