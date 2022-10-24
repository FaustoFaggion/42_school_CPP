#include "ConvertFloat.hpp"

ConvertFloat::ConvertFloat() {
}

ConvertFloat::ConvertFloat(char c) {
	std::cout << "float: ";
	printf("%.1ff \n", static_cast<float>(c));
}

ConvertFloat::ConvertFloat(int c) {
	std::cout << "float: ";
	printf("%.1ff \n", static_cast<float>(c));
}

ConvertFloat::ConvertFloat(float c) {
	std::cout << "float: ";
	printf("%.1ff \n", c);
}

ConvertFloat::ConvertFloat(double c) {	
	std::cout << "float: ";
	if (c >= 1.17549e-038  && c <= 3.40282e+038)
		printf("%.1ff \n", static_cast<float>(c));
	else {
		std::cout << "int: conversion is impossible" << std::endl;
	}
}

ConvertFloat::ConvertFloat(ConvertFloat &rsc){
	*this = rsc;
}

ConvertFloat::~ConvertFloat() {
}

ConvertFloat	&ConvertFloat::operator=(ConvertFloat const &rsc) {
	(void)rsc;
	return (*this);
}