#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}
Ice::Ice(Ice const &rsc): AMateria() {
	*this = rsc;
}

Ice const	&Ice::operator=(Ice const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

Ice::~Ice() {
}

Ice *Ice::clone() const {
	return (new Ice());
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}