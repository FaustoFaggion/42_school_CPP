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
	std::vector<int>	v(this->_vec);

	std::sort(v.begin(), v.end());
	ss = (v[1] - v[0]);
	for (std::vector<int>::iterator it = v.begin(); it != v.end() - 1; it++) {
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
	std::vector<int> v(this->_vec);
	
	std::sort(v.begin(), v.end());

	// for (unsigned int i = 0; i < v.size(); i++)
	// 	std::cout << v[i] << " ";
	// std::cout << std::endl;

	ls = (v.back() - v.front());
	return (ls);
}

int		Span::operator[](unsigned int i) const
{
	if (_vec.size() <= i)
	{
		std::out_of_range e("Index out of range");
		throw e;
	}
	return (_vec[i]);
}

std::ostream	&operator<<(std::ostream &lhs, Span &rhs) {
	for (unsigned int i = 0; i < rhs.getN(); i++) {
		std::cout << rhs[i] << " " << std::endl;
	}
	return (lhs);

}
