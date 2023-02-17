#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const &type) : type(type){
}

AMateria::AMateria(AMateria const &rsc) {
	*this = rsc;
}

AMateria::~AMateria() {
}


std::string const	&AMateria::getType() const{
	return (this->type);
}

AMateria const	&AMateria::operator=(AMateria const &rhs) {
	this->type = rhs.getType();
	return (*this);
}

bool	AMateria::operator==(AMateria const &rhs) {
	return (this->getType() == rhs.getType() ? true : false);
}

void	AMateria::use(ICharacter &target) {
	(void)target;
}

std::ostream	&operator<<(std::ostream &lhs, AMateria &rhs) {
	lhs << rhs.getType();
	return (lhs);
}