#include "ConvertInt.hpp"

ConvertInt::ConvertInt() {
}

ConvertInt::ConvertInt(char c) {
	std::cout << "int: ";
	std::cout << static_cast<int>(c) << std::endl;
}

ConvertInt::ConvertInt(int c) {
	std::cout << "int: ";
	std::cout << static_cast<int>(c) << std::endl;
}

ConvertInt::ConvertInt(float c) {
	std::cout << "int: ";
	if (c >= -2147483648.0  && c <= 2147483647.0)
		std::cout << static_cast<int>(c) << std::endl;
	else {
		std::cout << "conversion is impossible" << std::endl;
	}
}

ConvertInt::ConvertInt(double c) {
	std::cout << "int: ";
	if (c >= -2147483648  && c <= 2147483647)
		std::cout << static_cast<int>(c) << std::endl;
	else {
		std::cout << "int: conversion is impossible" << std::endl;
	}
}

ConvertInt::ConvertInt(ConvertInt &rsc){
	*this = rsc;
}

ConvertInt::~ConvertInt() {
}

ConvertInt	&ConvertInt::operator=(ConvertInt const &rsc) {
	(void)rsc;
	return (*this);
}