#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :	Form("pardon", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &rsc) : Form() {
	*this = rsc;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string const	&PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void	PresidentialPardonForm::exec(std::string target) {
	
	std::cout << target << " has been pardoned by Zaphod Beeblebrox ";

}

PresidentialPardonForm const	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}