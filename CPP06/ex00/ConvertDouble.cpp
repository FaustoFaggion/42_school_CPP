#include "ConvertDouble.hpp"

ConvertDouble::ConvertDouble() {
}

ConvertDouble::ConvertDouble(char c) {
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << ".0" << std::endl;
}

ConvertDouble::ConvertDouble(int c) {
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << ".0" << std::endl;
}

ConvertDouble::ConvertDouble(float c) {
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << "" << std::endl;
}

ConvertDouble::ConvertDouble(double c) {	
	std::cout << "double: ";
	std::cout << static_cast<double>(c) << "" << std::endl;
}

ConvertDouble::ConvertDouble(ConvertDouble &rsc){
	*this = rsc;
}

ConvertDouble::~ConvertDouble() {
}

ConvertDouble	&ConvertDouble::operator=(ConvertDouble const &rsc) {
	(void)rsc;
	return (*this);
}