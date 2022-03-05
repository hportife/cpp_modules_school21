#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    type = "some_Wronganimal";
    std::cout << "Wronganimal default constructor call\n";
}

WrongAnimal::WrongAnimal(std::string some_type)
{
    type = some_type;
    std::cout << "Wronganimal typed constructor call\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const & tmp)
{
    *this = tmp;
    std::cout << "WrongAnimal copy constructor call\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal destructor call\n";
}

std::string WrongAnimal::getType(void) const
{
    return type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "\"WrongAnimal Sounds\"\n";
}