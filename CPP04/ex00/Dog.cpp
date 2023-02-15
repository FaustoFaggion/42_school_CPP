#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog constructor called!!" << std::endl;
}

Dog::Dog(Dog const &rsc) : Animal(){
	std::cout << "Dog copy constructor called!!" << std::endl;
	*this = rsc;
}

Dog::~Dog() {
	std::cout << "Dog destructor called!!" << std::endl;
}

Dog&	Dog::operator=(Dog const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "au au au" << std::endl;
}