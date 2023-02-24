#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string.h>
#include <vector>
#include <list>
#include <queue>
#include <exception>
#include <algorithm>

class	NotFoundException : public std::exception {
	const char		*what() const throw() {
		return ("Number not found!!!");
	}
};

template<typename T>
void	easyfind(T &value1, int value2) {
	
	typename T::iterator it = std::find(value1.begin(), value1.end(), value2);

	if (it == value1.end())
		throw NotFoundException();
	else
		std::cout << *it << std::endl;
}

#endif
