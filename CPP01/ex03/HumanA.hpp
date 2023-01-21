#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanA();
		HumanA(std::string name, Weapon& weapon);

		std::string getName();

		std::string getWeapon();
		
		void	attack();
};

#endif