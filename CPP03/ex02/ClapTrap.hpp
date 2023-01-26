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
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap& operator=(ClapTrap const &rhs);
		
		std::string const &getName() const;
		int			const &getHitPoints() const;
		int			const &getEnergyPoints() const;
		int			const &getAttackDamage() const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	berepaired(unsigned int amount);
};

std::ostream&	operator<<(std::ostream& lhs, ClapTrap &rhs);

#endif