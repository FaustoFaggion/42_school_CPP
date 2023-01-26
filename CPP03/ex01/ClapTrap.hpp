#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap {

	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

	public:
		
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap(void);

		ClapTrap& operator=(const ClapTrap &rhs);
		
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	berepaired(unsigned int amount);

};

std::ostream&	operator<<(std::ostream& lhs, ClapTrap &rhs);

#endif