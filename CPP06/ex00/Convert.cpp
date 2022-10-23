#include "Convert.hpp"

Convert::Convert() : DetectType(){
	this->c = ' ';
	this->i	= 0;
}
Convert::Convert(const char * input) : DetectType(input) {
	int	idx;

	idx = verify();
	if (idx == CHAR) {
		this->c = input[0];
		ConvertChar(this->c);
		ConvertInt(this->c);
	}
	else if (idx == INT) {
		this->ll = std::stoll(this->getInput(), NULL);
		ConvertChar((int)this->ll);
		ConvertInt(this->ll);

	}
	else if (idx == FLOAT) {
		this->f = std::stof(this->getInput(), NULL);
		ConvertChar(this->f);
		ConvertInt(this->f);
		
		std::cout << "type Float" << std::endl;
	}
	else if (idx == DOUBLE) {
		this->d = std::stod(this->getInput(), NULL);
		ConvertChar(this->d);
		ConvertInt(this->d);
		std::cout << "type Double" << std::endl;
	}
	else if (idx == IMPOSSIBLE)
		std::cout << "type conversion is impossible" << std::endl;
}

Convert::Convert(Convert &rhs) : DetectType(rhs.getInput().c_str()) {
	*this = rhs;
}

Convert	&Convert::operator=(Convert const &rhs) {
	this->c = rhs.getC();
	this->i = rhs.getI();
	return (*this);
}

Convert::~Convert() {
}


char const	&Convert::getC() const {
	return (this->c);
}

long long int const	&Convert::getLL() const {
	return (this->ll);
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
