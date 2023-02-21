#include "Convert.hpp"

Convert::Convert() : DetectType(){
	this->c = ' ';
	this->ld	= 0;
}
Convert::Convert(const char * input) : DetectType(input) {
	int	idx;

	idx = verify();
	if (idx == CHAR) {
		this->c = input[0];
		ConvertChar(this->c);
		ConvertInt(this->c);
		ConvertFloat(this->c);
		ConvertDouble(this->c);
	}
	else if (idx == INT) {
		this->ld = std::strtold(this->getInput().c_str(), NULL);
		if (this->ld >= -2147483648  && this->ld <= 2147483647) {
			this->i = std::atoi(this->getInput().c_str());
			ConvertChar(this->i);
			ConvertInt(this->i);
			ConvertFloat(this->i);
			ConvertDouble(this->i);
		}
		else
			std::cout << "Invalid Argument" << std::endl;

	}
	else if (idx == FLOAT) {
		this->ld = std::strtold(this->getInput().c_str(), NULL);
		if ((this->ld >= 1.17549e-038  && this->ld <= 3.40282e+038) || ld == 0) {
			this->f = std::strtof(this->getInput().c_str(), NULL);
			ConvertChar(this->f);
			ConvertInt(this->f);
			ConvertFloat(this->f);
			ConvertDouble(this->f);
		}
		else
			std::cout << "Invalid Argument" << std::endl;
		
	}
	else if (idx == DOUBLE) {
		this->ld = std::strtold(this->getInput().c_str(), NULL);
		if ((this->ld >= 2.22507e-308  && this->ld <= 1.79769e+308) || ld == 0) {
			this->d = std::strtod(this->getInput().c_str(), NULL);
			ConvertChar(this->d);
			ConvertInt(this->d);
			ConvertFloat(this->d);
			ConvertDouble(this->d);
		}
		else
			std::cout << "Invalid Argument" << std::endl;
		
	}
	else if (idx == NAN) {
		std::cout << "char: conversion is impossible" << std::endl;
		std::cout << "int: conversion is impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (idx == NANF) {
		std::cout << "char: conversion is impossible" << std::endl;
		std::cout << "int: conversion is impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (idx == MINF) {
		std::cout << "char: conversion is impossible" << std::endl;
		std::cout << "int: conversion is impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (idx == PINF) {
		std::cout << "char: conversion is impossible" << std::endl;
		std::cout << "int: conversion is impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (idx == MINFF) {
		std::cout << "char: conversion is impossible" << std::endl;
		std::cout << "int: conversion is impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (idx == PINFF) {
		std::cout << "char: conversion is impossible" << std::endl;
		std::cout << "int: conversion is impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (idx == IMPOSSIBLE)
		std::cout << "type conversion is impossible" << std::endl;
}

Convert::Convert(Convert &rhs) : DetectType(rhs.getInput().c_str()) {
	*this = rhs;
}

Convert	&Convert::operator=(Convert const &rhs) {
	this->c = rhs.getC();
	this->ld = rhs.getLd();
	return (*this);
}

Convert::~Convert() {
}

long double const	&Convert::getLd() const {
	return (this->ld);
}

char const	&Convert::getC() const {
	return (this->c);
}

int const	&Convert::getI() const {
	return (this->i);
}

float const	&Convert::getF() const {
	return (this->f);
}

double const	&Convert::getD() const {
	return (this->d);
}