#include "ConvertDouble.hpp"

ConvertDouble::ConvertDouble() {
}

ConvertDouble::ConvertDouble(char c) {
	std::cout << "double: ";
	printf("%.1f \n", static_cast<double>(c));
}

ConvertDouble::ConvertDouble(int c) {
	std::cout << "double: ";
	printf("%.1f \n", static_cast<double>(c));
}

ConvertDouble::ConvertDouble(float c) {
	std::cout << "double: ";
	printf("%.1f \n", static_cast<double>(c));
}

ConvertDouble::ConvertDouble(double c) {	
	std::cout << "double: ";
	printf("%.1f \n", static_cast<double>(c));
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