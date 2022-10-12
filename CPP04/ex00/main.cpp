#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void) {

	Animal		*vaca = new Animal("vaca");
	Cat			*mimi = new Cat();
	Dog			*toto = new Dog();
	WrongAnimal	*planta = new WrongAnimal("planta");
	WrongCat	*pantera = new WrongCat();
	

	std::cout << *vaca << std::endl;
	std::cout << *mimi << std::endl;
	std::cout << *toto << std::endl;
	std::cout << *planta << std::endl;
	std::cout << *pantera << std::endl;

	mimi->makeSound();
	toto->makeSound();
	vaca->makeSound();
	planta->makeSound();
	pantera->makeSound();

	return (0);
}

