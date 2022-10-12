#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
}

Cat::Cat(Cat const &rsc) : Animal(){
	*this = rsc;
}

Cat::~Cat() {
}

Cat	&Cat::operator=(Cat const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "meooowwwww" << std::endl;
}