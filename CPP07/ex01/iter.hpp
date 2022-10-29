#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string.h>

template<typename T>
void	iter(T *array, int len, void(*f)(T&)) {
	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
}

template<typename T>
void	show(T const &value) {
	std::cout << value << std::endl;
}

template<typename T>
void	show(T *value) {
	std::cout << *value << std::endl;
}

template<typename T>
void	show(T &value) {
	std::cout << value << std::endl;
}

template<typename T>
void	sum(T &value) {
	value = value + 32;
}

template<typename T>
void	sum(T *value) {
	value = value + 32;
}


#endif