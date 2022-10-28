#include "Span.hpp"

Span::Span() : _n(0){
	std::vector<int> _vec;
}

Span::Span(unsigned int n) : _n(n) {
	std::vector<int> _vec(n);
}

Span::~Span() {
}

void	Span::addNumber(int n) {
	if (_vec.size() < this->_n) {
		std::cout << "addnumber" << std::endl;
		this->getVec().push_back(n);
	}
	else
		throw ClassFull();
}