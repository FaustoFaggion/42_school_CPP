#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
}

Dog::Dog(Dog const &rsc) : Animal(){
	*this = rsc;
}

Dog::~Dog() {
}

Dog&	Dog::operator=(Dog const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

void	Dog::makeSound() {
	std::cout << "au au au" << std::endl;
}