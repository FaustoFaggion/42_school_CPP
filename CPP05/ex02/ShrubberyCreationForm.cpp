#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :	AForm(target, 145),
																	_gradeExec(137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &rsc) : AForm() {
	*this = rsc;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

int const	&ShrubberyCreationForm::getGradeExec() const {
	return (this->_gradeExec);
}

const char *ShrubberyCreationForm::FileFailOpenException::what() const throw() {
	return ("file didn't open!!");
};

ShrubberyCreationForm const	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rsc) {
	this->setName(rsc.getName());
	this->setSign(rsc.getSign());
	this->_gradeExec = rsc.getGrade();
	return (*this);
}

void	ShrubberyCreationForm::createFile() {
	std::fstream	writeFile;
	std::fstream	readFile;
	std::string		fileName;

	fileName = this->getName() + "_shrubbery";

	writeFile.open (fileName, std::fstream::in | std::fstream::out | std::fstream::trunc);
	if (writeFile.fail()){
		
	}

	readFile.open ("tree.txt", std::fstream::in | std::fstream::out);
	if (readFile.fail()){
		std::cout << "read_file fail to open!!" << std::endl;
		return ;
	}

	writeFile << readFile.rdbuf();
	readFile.close();
	writeFile.close();
}