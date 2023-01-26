#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap {

	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

	public:
		
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap(void);

		ClapTrap& operator=(ClapTrap const &rhs);
		
		std::string	getName();
		int			getHitPoints();
		int			getEnergyPoints();
		int			getAttackDamage();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	berepaired(unsigned int amount);

};

std::ostream&	operator<<(std::ostream& lhs, ClapTrap &rhs);

#endif