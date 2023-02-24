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
		MutantStack() { };
		~MutantStack() { };

		typename std::deque<T>::iterator			begin() {return (this->c.begin());};
		typename std::deque<T>::iterator			end() {return (this->c.end());}
		typename std::deque<T>::reverse_iterator	rbegin() {return (this->c.rbegin());}
		typename std::deque<T>::reverse_iterator	rend() {return (this->c.rend());};
};

#endif
