#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal standard constructor called!!" << std::endl;
}

Animal::Animal(std::string const type) : type(type) {
	std::cout << "Animal constructor called!!" << std::endl;
}

Animal::Animal(Animal const &rsc) {
	std::cout << "Animal copy constructor called!!" << std::endl;
	*this = rsc;
}

Animal::~Animal() {
	std::cout << "Animal destructor called!!" << std::endl;
}

Animal&	Animal::operator=(Animal const &rhs) {
	std::cout << "Animal operator= called!!" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string const	&Animal::getType() const {
	return (this->type);
}

void	Animal::setType(std::string const type) {
	this->type = type;
} 

void	Animal::makeSound() {
	std::cout << "Animal Sound!!" << std::endl;
}

std::ostream&	operator<<(std::ostream &lhs, Animal &rhs) {
	lhs << rhs.getType();
	return (lhs);
}