#include "Character.hpp"

Character::Character()
{
    std::cout << "DBG: Character default constructor called\n";
    name = "Some_character";
    number = 0;
    for (int i = 0; i < 4; i++)
        invetory[i] = NULL;
}

Character::Character(const std::string &name)
{
    std::cout << "DBG: Character named constructor called\n";
    name = name;
    number = 0;
    for (int i = 0; i < 4; i++)
        invetory[i] = NULL;
}

Character::Character(const Character &tmp)
{
    std::cout << "DBG: Character copy constructor called\n";
    name = tmp.name;
    number = tmp.number;
    for (int i = 0; i < 4; i++) {
        if (tmp.invetory[i])
            this->invetory[i] = tmp.invetory[i]->clone();
        else
            this->invetory[i] = NULL;
    }
}

const Character &Character::operator=(const Character &assign)
{
    std::cout << "DBG: Character operator [=] constructor called\n";
    name = assign.name;
    number = assign.number;
    for (int i = 0; i < 4; i++) {
        if (this->invetory[i]) {
            delete this->invetory[i];
            this->invetory[i] = assign.invetory[i]->clone();
        }
        else
            this->invetory[i] = NULL;
    }
    return *this;
}