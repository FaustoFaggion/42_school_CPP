#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Cat constructor called!!" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const &rsc) : AAnimal(){
	std::cout << "Cat copy constructor called!!" << std::endl;
	this->brain = new Brain();
	*this = rsc;
	
}

Cat::~Cat() {
	std::cout << "Cat destructor called!!" << std::endl;
	delete brain;
}

Cat	&Cat::operator=(Cat const &rhs) {
	std::cout << "Cat operator= called!!" << std::endl;
	if (this != &rhs)
	{
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return (*this);
}

Brain	&Cat::getBrain() const {
	return (*this->brain);
}

void	Cat::makeSound() {
	std::cout << "meooowwwww" << std::endl;
}