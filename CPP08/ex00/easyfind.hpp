#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <list>
#include <queue>
#include <exception>

class	NotFoundException : public std::exception {
	const char		*what() const throw() {
		return ("Number not found!!!");
	}
};

template<typename T>
void	easyfind(T &value1, int value2) {
	
	for (typename T::iterator it = value1.begin(); it != value1.end(); it++) {
			if (*it == value2) {
				std::cout << *it << std::endl;
				return ;
			}
	}
	throw NotFoundException();
}

#endif