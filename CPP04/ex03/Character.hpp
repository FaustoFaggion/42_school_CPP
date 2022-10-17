#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter {

	protected:
		std::string	name;
		AMateria	*inventory[4];
		AMateria	*leftOnTheFloor[50];
	public:
		Character();
		Character(std::string name);
		Character(Character const & rsc);
		~Character();

		Character const		&operator=(Character const &rsc);

		std::string const	&getName() const;
		void 				equip(AMateria *m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

std::ostream	&operator<<(std::ostream &lhs, Character &rhs);

#endif