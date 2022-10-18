#include "Form.hpp"

Form::Form() : _name("xxx"), _grade(0), _sign(false) {
}

Form::Form(std::string name, int grade) :	_name(name), 
											_grade(grade), 
											_sign(false) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &rsc) {
	*this = rsc;
}

Form::~Form(){

}

std::string const	&Form::getName() const {
	return (this->_name);
}

bool const	&Form::getSign() const {
	return (this->_sign);
}

int const	&Form::getGrade() const {
	return (this->_grade);
}

void	Form::setSign(bool	sign) {
	this->_sign = sign;
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

void	Form::beSigned(Bureaucrat const &responsable) {

	if (responsable.getGrade() <= this->getGrade()) {
		this->setSign(true);
		responsable.signForm(*this, true);
	}
	else {
		throw GradeTooLowException();
	}
}

Form const	&Form::operator=(Form const &rsc) {
	this->_name = rsc.getName();
	this->_sign = rsc.getSign();
	this->_grade = rsc.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &lhs, Form &rhs) {
	lhs << "Form name: " <<rhs.getName() << std::endl;
	lhs << "Grade required: " << rhs.getGrade() << std::endl;
	lhs << "Signed? " << rhs.getSign() << std::endl;

	return (lhs);
}