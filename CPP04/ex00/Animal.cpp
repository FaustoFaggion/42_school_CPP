#include "Animal.hpp"

Animal::Animal() {
}

Animal::Animal(std::string const type) : type(type) {

}

Animal::Animal(Animal const &rsc) {
	*this = rsc;
}

Animal::~Animal() {
}

Animal&	Animal::operator=(Animal const &rhs) {
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