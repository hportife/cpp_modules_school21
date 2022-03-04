#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "dog constructor call\n";
}

Dog::~Dog(void)
{
    std::cout << "dog destructor call\n";
}

void Dog::makeSound(void)
{
    std::cout << "BARK!\n";
}