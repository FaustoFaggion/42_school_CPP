#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string.h>
#include "ICharacter.hpp"

class	ICharacter;

class AMateria {

	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &rsc);
		virtual ~AMateria();

		
		std::string const	&getType() const;

		AMateria const		&operator=(AMateria const &rhs);
		bool				operator==(AMateria const &rhs);

		virtual AMateria 	*clone() const = 0;
		virtual void 		use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &lhs, AMateria &rhs);

#endif