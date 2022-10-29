#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain {

	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(Brain const &rsc);
		~Brain();

		Brain	&operator=(Brain const &rhs);

		std::string const	&getIdeas(int i);
};
#endif