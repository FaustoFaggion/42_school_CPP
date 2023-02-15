#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat"){
	std::cout << "Wrong Cat constructor called!!" << std::endl;
}

WrongCat::WrongCat(WrongCat const &rsc) : WrongAnimal(){
	std::cout << "Wrong Cat copy constructor called!!" << std::endl;
	*this = rsc;
}

WrongCat::~WrongCat() {
	std::cout << "Wrong Cat destructor called!!" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong Animal Sound!!" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	this->type = rhs.getType();
	return (*this);
}
