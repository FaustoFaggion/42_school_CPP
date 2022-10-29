#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string.h>
#include <stdexcept>
#include <exception>

template<typename T>
class	Array {
	private:
		T				*_arr;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int size);
		~Array();
		Array(Array const &rhs);
		Array	&operator=(Array const &rhs);
		
		T const				&getArr(unsigned int i) const;
		unsigned int const	&getSize() const;
		unsigned int const	&getN() const;

		unsigned int		&size();

		T					&operator[](unsigned int const i);
};

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {

}

template<typename T>
Array<T>::Array(unsigned int size) {
	this->_size = size;
	this->_arr = new T[this->_size];
	for (unsigned int i = 0; i < size; i++)
		this->_arr[i] = T(); 
}

template<typename T>
Array<T>::~Array() {
	delete[] this->_arr;
}

template<typename T>
Array<T>::Array(Array const &rhs) {
	this->_arr = new T[rhs._size];
	this->_size = rhs._size;
	*this = rhs;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &rhs) {
	for (unsigned int i = 0; i < rhs._size; i++) {
		this->_arr[i] = rhs.getArr(i);
	}
	return (*this);
}

template<typename T>
T const	&Array<T>::getArr(unsigned int i) const {
	return(this->_arr[i]);
}

template<typename T>
unsigned int	&Array<T>::size() {
	return (this->_size);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (this->_size <= i || i < 0) {
		std::out_of_range e("Index out of range");
		throw e;
	}
	return (this->_arr[i]);
}

template<typename T>
std::ostream	&operator<<(std::ostream &lhs, Array<T> &rhs) {

	for (unsigned int i = 0; i < rhs.size(); i++) {
		lhs << rhs.getArr(i) << std::endl;
	}
	return (lhs);
}

#endif