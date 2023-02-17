#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog constructor called!!" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const &rsc) : Animal(){
	std::cout << "Dog copy constructor called!!" << std::endl;
	this->brain = new Brain();
	*this = rsc;
}

Dog::~Dog() {
	std::cout << "Dog destructor called!!" << std::endl;
	delete brain;
}

Dog&	Dog::operator=(Dog const &rhs) {
	std::cout << "Dog operator= called!!" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.getType();
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*rhs.brain);
	}
	return (*this);
}

Brain const	&Dog::getBrain() const {
	return (*this->brain);
}

void	Dog::makeSound() const{
	std::cout << "au au au" << std::endl;
}