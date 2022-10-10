#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {

	private:
		std::string	name;
	public:
		
		Zombie();
		Zombie(std::string name);
		~Zombie();
	
		std::string	getName(){
			return(this->name);
		}

		void	setName(std::string name){
			this->name = name;
		}

		void	announce(void);
};

Zombie*	zombieHorde( int N, std::string name);

#endif