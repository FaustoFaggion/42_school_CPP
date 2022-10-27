#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include <exception>

template<typename T>
class	Array {
	private:
		T				*arr;
		unsigned int	size;

	public:
		Array();
		Array(unsigned int size);
		~Array();
		Array(Array const &rhs);
		Array	&operator=(Array const &rhs);
		
		T const				&getArr(unsigned int i) const;
		unsigned int const	&getSize() const;
		unsigned int const	&getN() const;

		T					&operator[](unsigned int const i);
};

template<typename T>
Array<T>::Array() : arr(NULL), size(0) {
}

template<typename T>
Array<T>::Array(unsigned int size) {
	this->size = size;
	arr = new T[this->size];
	for (unsigned int i = 0; i < size; i++)
		this->arr[i] = T(); 
}

template<typename T>
Array<T>::~Array() {
	delete[] arr;
}

template<typename T>
Array<T>::Array(Array const &rhs) {
	*this = rhs;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &rhs) {
	for (unsigned int i = 0; i < rhs._n; i++) {
		this->arr[i] = rhs.getArr(i);
	}
	return (*this);
}

template<typename T>
T const				&Array<T>::getArr(unsigned int i) const {
	return(this->arr[i]);
}

template<typename T>
unsigned int const	&Array<T>::getSize() const {
	return (this->size);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (this->size <= i || i < 0) {
		std::invalid_argument e("Invalid argument");
		throw e;
	}
	return (this->arr[i]);
}

template<typename T>
std::ostream	&operator<<(std::ostream &lhs, Array<T> &rhs) {

	for (unsigned int i = 0; i < rhs.getSize(); i++) {
		lhs << rhs.getArr(i) << std::endl;
	}
	return (lhs);
}

#endif