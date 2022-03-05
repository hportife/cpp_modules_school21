#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
    std::cout << "WrongCat constructor call\n";
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor call\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongMEOW!\n";
}