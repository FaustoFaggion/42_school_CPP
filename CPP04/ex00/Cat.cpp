#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat constructor called!!" << std::endl;
}

Cat::Cat(Cat const &rsc) : Animal(){
	std::cout << "Cat copy constructor called!!" << std::endl;
	*this = rsc;
}

Cat::~Cat() {
	std::cout << "Cat destructor called!!" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "meooowwwww" << std::endl;
}