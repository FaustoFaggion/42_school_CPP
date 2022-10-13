#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal standard constructor called!!" << std::endl;
}

AAnimal::AAnimal(std::string const type) : type(type) {
	std::cout << "Animal constructor called!!" << std::endl;
}

AAnimal::AAnimal(AAnimal const &rsc) {
	std::cout << "Animal copy constructor called!!" << std::endl;
	*this = rsc;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called!!" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const &rhs) {
	std::cout << "Animal operator= called!!" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

std::string const	&AAnimal::getType() const {
	return (this->type);
}

void	AAnimal::setType(std::string const type) {
	this->type = type;
} 

std::ostream&	operator<<(std::ostream &lhs, AAnimal &rhs) {
	lhs << rhs.getType();
	return (lhs);
}