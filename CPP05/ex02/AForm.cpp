#include "AForm.hpp"

AForm::AForm() : _name("xxx"), _grade(0), _sign(false) {
}

AForm::AForm(std::string name, int grade) :	_name(name), 
											_grade(grade), 
											_sign(false) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &rsc) {
	*this = rsc;
}

AForm::~AForm(){

}

std::string const	&AForm::getName() const {
	return (this->_name);
}

bool const	&AForm::getSign() const {
	return (this->_sign);
}

int const	&AForm::getGrade() const {
	return (this->_grade);
}

void	AForm::setName(std::string name) {
	this->_name = name;
}

void	AForm::setSign(int sign) {
	this->_sign = sign;
}

void	AForm::setSign(bool	sign) {
	this->_sign = sign;
}


void	AForm::beSigned(Bureaucrat const &responsable) {

	if (responsable.getGrade() <= this->getGrade()) {
		this->setSign(true);
		responsable.signForm(*this, true);
	}
	else {
		throw GradeTooLowException();
	}
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

AForm const	&AForm::operator=(AForm const &rsc) {
	this->_name = rsc.getName();
	this->_sign = rsc.getSign();
	this->_grade = rsc.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &lhs, AForm &rhs) {
	lhs << "AForm name: " <<rhs.getName() << std::endl;
	lhs << "Grade required: " << rhs.getGrade() << std::endl;
	lhs << "Signed? " << rhs.getSign() << std::endl;

	return (lhs);
}