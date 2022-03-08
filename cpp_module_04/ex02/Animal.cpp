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
    std::cout<< "Animal destructor call\n";
}

Animal const& Animal::operator=(Animal const& assign) {
	this->type = assign.type;
	std::cout << "Animal [=] operator called\n";
	return *this;
}

std::string Animal::getType(void) const
{
    return type;
}