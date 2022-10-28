#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string.h>
#include <stack>

template <typename T>
class MutantStack {
	private:
		std::stack<T>	mutant;
	public:
		MutantStack(/* args */);
		~MutantStack();
};

#endif