#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->weapon_type = weapon;
}

Weapon::~Weapon() {};

void Weapon::setType(std::string type)
{
	this->weapon_type = type;
}

std::string Weapon::getType(void) {return (this->weapon_type);}