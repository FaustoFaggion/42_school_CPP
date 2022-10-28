#include "Span.hpp"

Span::Span() : _maxSize(0) {
}

Span::Span(unsigned int maxSize) : _maxSize(maxSize) {
	this->_vec.reserve(maxSize);
}

Span::~Span() {
}

unsigned int	Span::getMaxSize() const {
	return (this->_maxSize);
}

int	Span::getVec(unsigned int ld) const {
	return (this->_vec[ld]);
}


void	Span::addNumber(int n) {

	if (_vec.size() < this->_maxSize) {
		this->_vec.push_back(n);
	}
	else
		throw ClassFullException();
}

void	Span::shortestSpan() {
	
	unsigned int		sh;
	std::vector<int>	v(this->_vec);

	std::sort(v.begin(), v.end());
	sh = (v[1] - v[0]);
	for (std::vector<int>::iterator it = v.begin(); it != v.end() - 1; it++) {
		if ((unsigned int)(*(it + 1) - *it) < sh) {
			sh = (*(it + 1) - *it);
		}
	}
	std::cout << sh << std::endl;
}

void	Span::longestSpan() {
	
	std::vector<int> v(this->_vec);
	
	std::sort(v.begin(), v.end());

	for (unsigned int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::cout << (v.back() - v.front()) << std::endl;
}

std::ostream	&operator<<(std::ostream &lhs, Span &rhs) {
	for (unsigned int i = 0; i < rhs.getMaxSize(); i++) {
		std::cout << rhs.getVec(i) << " " << std::endl;
	}
	return (lhs);
}