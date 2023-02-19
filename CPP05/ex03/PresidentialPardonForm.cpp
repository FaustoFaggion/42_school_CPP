#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential request", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :	AForm("presidential request", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &rsc) :
		AForm(rsc.getName(), rsc.getGradeSign(), rsc.getGradeExec()) {
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
	this->setSign(rsc.getSign());
	this->_target = rsc.getTarget();
	return (*this);
}