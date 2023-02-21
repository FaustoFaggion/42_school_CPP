#include "ConvertFloat.hpp"

ConvertFloat::ConvertFloat() {
}

ConvertFloat::ConvertFloat(char c) {
	std::cout << "float: ";
	std::cout << static_cast<float>(c) << ".0f" << std::endl;
}

ConvertFloat::ConvertFloat(int c) {
	std::cout << "float: ";
	std::cout << static_cast<float>(c) << ".0f" << std::endl;
}

ConvertFloat::ConvertFloat(float c) {
	std::cout << "float: ";
	if (c == static_cast<int>(c))
		std::cout << c << ".0f" << std::endl;
	else
		std::cout << c << "f" << std::endl;
}

ConvertFloat::ConvertFloat(double c) {	
	std::cout << "float: ";
	if ((c >= 1.17549e-038  && c <= 3.40282e+038) || c == 0){

		if (c == static_cast<int>(c))
			std::cout << static_cast<float>(c) << ".0f" << std::endl;
		else
			std::cout << c << "f" << std::endl;
	}
	else {
		std::cout << "conversion is impossible" << std::endl;
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