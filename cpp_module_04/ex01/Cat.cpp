#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    BrainArr = new Brain("cat idea");
    std::cout << "cat constructor call\n";
}

Cat::~Cat(void)
{
    std::cout << "cat destructor call\n";
}

void Cat::makeSound(void) const
{
    std::cout << "MEOW!\n";
}