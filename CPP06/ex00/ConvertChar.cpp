#include "ConvertChar.hpp"

ConvertChar::ConvertChar() {
}

ConvertChar::ConvertChar(char c) {
	std::cout << "char: ";
	std::cout << c << std::endl;
}

ConvertChar::ConvertChar(int c) {
	std::cout << "char: ";
	if ((c >= 0 && c <= 32))
		std::cout << "Non displayable" << std::endl;
	else if ((c >= 33 && c <= 126) )
		std::cout << static_cast<char>(c) << std::endl;
	else
		std::cout << "conversion is impossible" << std::endl;
}

ConvertChar::ConvertChar(float c) {
	std::cout << "char: ";
	if (c == static_cast<int>(c)) {
		if ((c >= 0 && c <= 32))
			std::cout << "Non displayable" << std::endl;
		else if ((c >= 33 && c <= 126) )
		{
			std::cout.precision(1);
			std::cout << static_cast<char>(c) << std::endl;
		}
		else
			std::cout << "conversion is impossible" << std::endl;
	}
	else
		std::cout << "conversion is impossible" << std::endl;
}

ConvertChar::ConvertChar(double c) {
	std::cout << "char: ";
	if (c == static_cast<int>(c)) {
		if ((c >= 0 && c <= 32))
			std::cout << "Non displayable" << std::endl;
		else if ((c >= 33 && c <= 126))
		{
			std::cout.precision(1);
			std::cout << static_cast<char>(c) << std::endl;
		}
		else
			std::cout << "conversion is impossible" << std::endl;
	}
	else
		std::cout << "conversion is impossible" << std::endl;

}

ConvertChar::ConvertChar(ConvertChar &rsc){
	*this = rsc;
}

ConvertChar::~ConvertChar() {
}

ConvertChar	&ConvertChar::operator=(ConvertChar const &rsc) {
	(void)rsc;
	return (*this);
}