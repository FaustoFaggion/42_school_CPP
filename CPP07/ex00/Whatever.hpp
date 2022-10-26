#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string.h>

template<typename T>
void	swap(T &value1, T &value2) {
	T swap;

	swap = value1;
	value1 = value2;
	value2 = swap;
}

template<typename T>
T	min(T &value1, T &value2) {
	if (value2 < value1)
		return (value2);	
	else if (value1 < value2)
		return (value1);
	return (value2);
}

template<typename T>
T	max(T &value1, T &value2) {
	if (value2 > value1)
		return (value2);
	else if (value1 > value2)
		return (value1);
	return (value2);
}

#endif