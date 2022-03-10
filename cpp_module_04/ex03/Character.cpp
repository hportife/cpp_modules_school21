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
    this->name = name;
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

Character::~Character()
{
    std::cout << "DBG: Character destructor called\n";
    for (int i = 0; i < 4; i++)
        if (invetory[i] != NULL)
            delete invetory[i];
}

std::string	const &Character::getName() const {
    return this->name;
}

void	Character::equip(AMateria* m) {
    if (m == NULL) {
        std::cout << "equip error!\n";
        return ;
    } else {
        for (int i = 0; i < 4 && invetory[i]; i++)
            if (invetory[i]->getType() == m->getType())
                return ;
        invetory[number++ % 3] = m;
        std::cout << name << " takes " << m->getType() << std::endl;
        return ;
    }
    std::cout << "Nothing to take for " << name << std::endl;
}

void	Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
        std::cout << name << " goes to wrong slot\n";
    else if (this->invetory[idx] == NULL)
        std::cout << name << " goes to empty slot\n";
    else {
        std::cout << name << " unequip " << invetory[idx]->getType() << std::endl;
        invetory[idx] = NULL;
        number = idx;
    }
}

void	Character::use(int idx, ICharacter& target) {
    if ((void *)&target == NULL) {
        std::cout << "Target is NULL\n";
        return ;
    }
    if (!invetory[idx] || idx < 0 || idx > 3)
        std::cout << "This materia doesn't exists!\n";
    else {
        this->invetory[idx]->use(target);
        delete this->invetory[idx];
        this->invetory[idx] = NULL;
    }
}