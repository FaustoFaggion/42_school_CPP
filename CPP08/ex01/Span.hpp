#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <iterator>
#include <algorithm>
#include <exception>
 #include <ctime>

class	ClassFullException : public std::exception {
	const char		*what() const throw() {
		return ("Class full. Can't add more numbers!!!");
	}
};

class	ClassNoNumbersException : public std::exception {
	const char		*what() const throw() {
		return ("There are no numbers to compare!!!");
	}
};

class	ClassToManyException : public std::exception {
	const char		*what() const throw() {
		return ("Too many numbers to add!!!");
	}
};

class Span {
	private:
		std::vector<int>	_vec;
		unsigned int		_N;
	public:
		Span();
		Span(unsigned int N);
		~Span();

		unsigned int		getN() const;

		void				addNumber(int n);
		void				addManyNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();

		int					operator[](unsigned int i) const;
};

std::ostream	&operator<<(std::ostream &lhs, Span &rhs);

#endif
