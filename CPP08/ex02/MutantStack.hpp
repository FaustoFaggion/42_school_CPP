#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string.h>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	private:
		std::stack<T>	mutant;
	public:
		MutantStack();
		~MutantStack();

		typename std::deque<T>::iterator	begin();
		typename std::deque<T>::iterator	end();
		typename std::deque<T>::reverse_iterator	rbegin();
		typename std::deque<T>::reverse_iterator	rend();
};

template<typename T>
MutantStack<T>::MutantStack() {
}

template<typename T>
MutantStack<T>::~MutantStack() {
}

template<typename T>
typename std::deque<T>::iterator	MutantStack<T>::begin() {
	return (this->c.begin());
}

template<typename T>
typename std::deque<T>::iterator	MutantStack<T>::end() {
	return (this->c.end());
}

template<typename T>
typename std::deque<T>::reverse_iterator	MutantStack<T>::rbegin() {
	return (this->c.rbegin());
}

template<typename T>
typename std::deque<T>::reverse_iterator	MutantStack<T>::rend() {
	return (this->c.rend());
}

#endif