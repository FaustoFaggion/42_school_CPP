#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int    main(void) {

	AAnimal	*animals[10];
	Cat		cat;
    Cat		clone = cat;

	for (size_t i = 0; i < 10; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
	animals[0]->makeSound();
	animals[1]->makeSound();
	for (size_t i = 0; i < 10; i++)
		delete animals[i];

	Cat cat1;
	Cat cat2(cat1);
	{
		Cat tmp = cat1;
	}
	return (0);
}

