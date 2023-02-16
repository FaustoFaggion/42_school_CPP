#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	// std::cout << "Ice default constructor called" << std::endl;
}
Ice::Ice(Ice const &rsc): AMateria() {
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = rsc;
}

Ice const	&Ice::operator=(Ice const &rhs) {
	// std::cout << "Ice operator= called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

Ice::~Ice() {
	// std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone() const {
	// std::cout << "clone ice called!!" << std::endl;
	return (new Ice());
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}