#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <exception>
 #include <sys/time.h>

class	ClassFullException : public std::exception {
	const char		*what() const throw() {
		return ("Class full. Can't add more numbers!!!");
	}
};

class Span {
	private:
		std::vector<int>	_vec;
		unsigned int _maxSize;
	public:
		Span();
		Span(unsigned int maxSize);
		~Span();

		unsigned int		getMaxSize() const;
		int					getVec(unsigned int ld) const;

		void				addNumber(int n);
		void				shortestSpan();
		void				longestSpan();
};

std::ostream	&operator<<(std::ostream &lhs, Span &rhs);

#endif