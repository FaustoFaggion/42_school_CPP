#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string.h>
#include <type_traits>

template<typename T>
void	iter(T *array, int len, void(*f)(T&)) {
	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
}

template<typename T>
void	iter(T **array, int len, void(*f)(T*)) {
	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
}

#endif