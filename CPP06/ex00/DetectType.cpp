#include "DetectType.hpp"

DetectType::DetectType() {
}

DetectType::DetectType(const char *argv) : input(argv) {
}

DetectType::DetectType(DetectType &rsc) {
	*this = rsc;
}

DetectType::~DetectType() {
}

std::string const	&DetectType::getInput() const {
	return (this->input);
}

double const	&DetectType::getD() const {
	return (this->d);
}

DetectType	&DetectType::operator=(DetectType const &rhs) {
	const_cast<std::string&>(this->input) = (rhs.getInput());
	this->d = rhs.getD();
	return (*this);
}

int	DetectType::verify() {
	if (this->getInput().compare("nan") == 0) {
		return (NAN);
	}
	if (this->getInput().length() == 1 && std::isalpha(this->getInput()[0])) {
		return (CHAR);
	}
	else {
		int	flag = 0;
		for (int i = 0; i < (int)this->getInput().length(); i++) {
			if (!std::isdigit(this->getInput()[i])) {
				if (this->getInput()[i] == '.') {
					if (flag == 0 && this->getInput()[i + 1] != '\0')
						flag = 1;
					else
						return (IMPOSSIBLE);
				}
				if (this->getInput()[i] != '.') {
					if (flag != 1)
						return (IMPOSSIBLE);
					if ((this->getInput()[i] == 'f' || this->getInput()[i] == 'F')
										&& std::isdigit(this->getInput()[i - 1])
											&& this->getInput()[i + 1] == '\0')
						return (FLOAT);
					else	
						return (IMPOSSIBLE);
				}
			}
		}
		if (flag == 1) {
			return (DOUBLE);
		}
		else if (flag == 0)
			return (INT);
	}
	return (-1);
}
