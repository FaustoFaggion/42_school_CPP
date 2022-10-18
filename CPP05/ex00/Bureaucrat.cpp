#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	if (grade < 1)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooHighException();
	this->_name = name;
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rsc) {
	*this = rsc;
}

Bureaucrat::~Bureaucrat() {

}

std::string const	&Bureaucrat::getName() const {
	return (this->_name);
}

int const	&Bureaucrat::getGrade() const{
	return (this->_grade);
}

void	Bureaucrat::increment() {
	if (this->getGrade() == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement() {
	if (this->getGrade() == 150)
		throw GradeTooLowException();
	this->_grade++;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

Bureaucrat	const &Bureaucrat::operator=(Bureaucrat const &rsc) {
	this->_name = rsc.getName();
	this->_grade = rsc.getGrade();
	return(*this);
}

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs) {
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();

	return (lhs);
}