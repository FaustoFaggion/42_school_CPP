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
		Array() : _arr(NULL), _size(0) { }
		
		Array(unsigned int n)
		{
			this->_size = n;
			this->_arr = new T[this->size()];
			for (unsigned int i = 0; i < n; i++)
			this->_arr[i] = T(); 
		}
		
		~Array() {delete[] this->_arr;}
		
		Array(Array const &rhs)
		{
			this->_arr = NULL;
			*this = rhs;
		}
		
		Array	&operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				if (this->_arr != NULL)
					delete[] this->_arr;
				this->_arr = new T[rhs.size()];
				for (unsigned int i = 0; i < rhs.size(); i++)
				{
					this->_arr[i] = rhs._arr[i];
				}
				this->_size = rhs.size();
			}
			return (*this);
		}

		unsigned int		size() const
		{
			return (this->_size);
		}

		T					&operator[](unsigned int const i)
		{
			if (this->_size <= i || i < 0)
			{
				std::out_of_range e("Index out of range");
				throw e;
			}
			return (this->_arr[i]);
		}
};


template<typename T>
std::ostream	&operator<<(std::ostream &lhs, Array<T> &rhs) {

	for (unsigned int i = 0; i < rhs.size(); i++) {
		lhs << rhs[i] << std::endl;
	}
	return (lhs);
}

#endif