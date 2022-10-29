#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :	AForm("presidential", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &rsc) : AForm() {
	*this = rsc;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string const	&PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeExec() )
		throw GradeTooLowException();
	else if (this->getSign() == false)
		throw NotSignedException();
	else 
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox " << std::endl;;
}

PresidentialPardonForm const	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}