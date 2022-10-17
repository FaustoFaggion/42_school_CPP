#include "Character.hpp"

Character::Character(void) {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 50; i++) {
		this->leftOnTheFloor[i] = NULL;
	}
}

Character::Character(std::string name) : name(name) {
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 50; i++) {
		this->leftOnTheFloor[i] = NULL;
	}
}

Character::Character(Character const & rsc) {
	*this = rsc;
}

Character::~Character() {
	std::cout << "character destructor called" << std::endl;

	for(int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL) {
			std::cout << "inventory destructor called at " << i << std::endl;
			delete this->inventory[i];
		}
	}
	for(int i = 0; i < 4; i++) {
		if (this->leftOnTheFloor[i] != NULL) {
			std::cout << "inventory destructor called at " << i << std::endl;
			delete this->leftOnTheFloor[i];
		}
	}
}

Character const	&Character::operator=(Character const &rsc) {
	std::cout << "Character operator= called" << std::endl;
	this->name = rsc.getName();
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 50; i++) {
		this->leftOnTheFloor[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	for(int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL) {
			std::cout << "equip inventory called at " << i << std::endl;
			this->inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	for (int i = 0; i < 50; i++) {
		if (this->leftOnTheFloor[i] == NULL){
			std::cout << "unequip inventory called at " << i << std::endl;
			this->leftOnTheFloor[i] = this->inventory[idx];
			break;
		}
	}
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {
	this->inventory[idx]->use(target);
}

std::ostream	&operator<<(std::ostream &lhs, Character &rhs) {
	lhs << rhs.getName();
	return (lhs);
}
