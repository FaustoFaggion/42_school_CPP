#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
}

WrongAnimal::WrongAnimal(std::string const type) : type(type) {

}

WrongAnimal::WrongAnimal(WrongAnimal const &rsc) {
	*this = rsc;
}

WrongAnimal::~WrongAnimal() {
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