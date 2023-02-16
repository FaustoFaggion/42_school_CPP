#include "AMateria.hpp"

AMateria::AMateria() {
	// std::cout << "AMaterial standard constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type){
	// std::cout << "AMaterial constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &rsc) {
	// std::cout << "AMaterial copy constructor called" << std::endl;
	*this = rsc;
}

AMateria::~AMateria() {
	// std::cout << "AMaterial destructor called" << std::endl;
}


std::string const	&AMateria::getType() const{
	return (this->type);
}

AMateria const	&AMateria::operator=(AMateria const &rhs) {
	// std::cout << "AMaterial operator= called" << std::endl;
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