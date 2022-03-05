#include "Animal.hpp"

Animal::Animal(void)
{
    type = "some_animal";
    std::cout << "animal default constructor call\n";
}

Animal::Animal(std::string some_type)
{
    type = some_type;
    std::cout << "animal typed constructor call\n";
}

Animal::Animal(Animal const & tmp)
{
    *this = tmp;
    std::cout << "Animal copy constructor call\n";
}

Animal::~Animal()
{
    std::cout<< "animal destructor call\n";
}

std::string Animal::getType(void) const
{
    return type;
}

void Animal::makeSound(void) const
{
    std::cout << "\"Animal Sounds\"\n";
}