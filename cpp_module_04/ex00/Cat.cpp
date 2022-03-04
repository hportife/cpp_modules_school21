#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "cat constructor call\n";
}

Dog::~Dog(void)
{
    std::cout << "cat destructor call\n";
}

void Cat::makeSound(void)
{
    std::cout << "MEOW!\n";
}