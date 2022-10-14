#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &rsc) :  AMateria()  {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = rsc;
}
Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure const	&Cure::operator=(Cure const &rhs) {
	std::cout << "Ice operator= called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

Cure	*Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}