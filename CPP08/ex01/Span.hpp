#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <exception>

class	ClassFull : public std::exception {
	const char		*what() const throw() {
		return ("Class full. Can't add more numbers!!!");
	}
};

class Span {
	private:
		unsigned int _n;
	public:
		std::vector<int>	_vec;
		Span();
		Span(unsigned int n);
		~Span();

		void	addNumber(int n);

		std::vector<int>	getVec() {
			return (this->_vec);
		}
};

#endif