#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :	Form("shrubbery", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &rsc) : Form() {
	*this = rsc;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string	const &ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

const char *ShrubberyCreationForm::FileFailOpenException::what() const throw() {
	return ("file didn't open!!");
};

void	ShrubberyCreationForm::createFile(std::string const target) {
	std::fstream	writeFile;
	std::string		fileName;

	fileName = target + "_shrubbery";

	writeFile.open (fileName, std::fstream::in | std::fstream::out | std::fstream::trunc);
	if (writeFile.fail()){
		std::cout << "write_file fail to open!!" << std::endl;
	}
	std::string		tree = "          &&& &&  & &&\n     && &//&/|& ()|/ @, &&	\n      &//(/&/&||/& /_/)_&/_&	\n   &() &//&|()|/&// '% & ()	\n  &_/_&&_/ |& |&&/&__%_/_& &&	\n&&   && & &| &| /& & % ()& /&&	\n ()&_---()&/&/|&&-&&--%---()~	\n     &&     /|||	\n             |||	\n             |||	\n             |||	\n       , -=-~  .-^- _	\n ";

		writeFile << tree;
		writeFile.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	
	if (executor.getGrade() > this->getGradeExec() )
		throw GradeTooLowException();
	else if (this->getSign() == true)
		throw AlreadySignedException();
	else {
		std::fstream	writeFile;
		std::string		fileName;
		
		fileName = this->_target + "_shrubbery";
		writeFile.open (fileName, std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (writeFile.fail()){
			
		}
		std::string		tree = "          &&& &&  & &&\n     && &//&/|& ()|/ @, &&	\n      &//(/&/&||/& /_/)_&/_&	\n   &() &//&|()|/&// '% & ()	\n  &_/_&&_/ |& |&&/&__%_/_& &&	\n&&   && & &| &| /& & % ()& /&&	\n ()&_---()&/&/|&&-&&--%---()~	\n     &&     /|||	\n             |||	\n             |||	\n             |||	\n       , -=-~  .-^- _	\n ";

		writeFile << tree;
		writeFile.close();
	}
}

ShrubberyCreationForm const	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}