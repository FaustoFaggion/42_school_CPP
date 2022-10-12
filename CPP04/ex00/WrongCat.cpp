#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat"){
}

WrongCat::WrongCat(WrongCat const &rsc) : WrongAnimal(){
	*this = rsc;
}

WrongCat::~WrongCat() {
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {
	this->type = rhs.getType();
	return (*this);
}
