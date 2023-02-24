#include "Span.hpp"

Span::Span() : _vec(), _N(0) {
}

Span::Span(unsigned int N) : _N(N) {
	this->_vec.reserve(N);
}

Span::~Span() {
}

unsigned int	Span::getN() const {
	return (_N);
}

void	Span::addNumber(int n) {

	if (_vec.size() < _N) {
		this->_vec.push_back(n);
	}
	else
		throw ClassFullException();
}

void	Span::addManyNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (static_cast<long unsigned int>(std::distance(first, last)) > (_vec.size() - _vec.capacity()))
		throw ClassToManyException();
	
	for (; first != last; ++first)
	{
		this->addNumber(*first);
	}
}

unsigned int	Span::shortestSpan() {
	
	if (_vec.size() <=1)
		throw ClassNoNumbersException();
	
	int					ss;
	
	std::sort(_vec.begin(), _vec.end());
	ss = (_vec[1] - _vec[0]);
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end() - 1; it++) {
		if ((int)(*(it + 1) - *it) < ss) {
			ss = (*(it + 1) - *it);
		}
	}
	return (ss);
}

unsigned int	Span::longestSpan()
{
	if (_vec.size() <=1)
		throw ClassNoNumbersException();
	
	unsigned int		ls;

	std::sort(_vec.begin(), _vec.end());

	ls = (_vec.back() - _vec.front());
	return (ls);
}
