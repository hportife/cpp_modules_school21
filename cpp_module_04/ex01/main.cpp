#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *Array[6];
	Dog dog;
	Dog dog1;
	dog = dog1;
	const Cat cat;
	for (int i = 0; i < 3; ++i)
		Array[i] = new Dog(dog);
	for (int i = 3; i < 6; ++i)
		Array[i] = new Cat(cat);
	for (int i = 0; i < 6; ++i)
		delete Array[i];
	return (0);
}