#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const &rsc) :  AMateria()  {
	*this = rsc;
}
Cure::~Cure() {
}

Cure const	&Cure::operator=(Cure const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

Cure	*Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}