#include "HumanA.hpp"

std::string ha_name;
Weapon*		weapon_type;

HumanA::HumanA(std::string name, Weapon type)
{
	this->ha_name = name;
	this->weapon_type = &type;
}
HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << this->ha_name << " attacks with their " << this->weapon_type->getType() << std::endl;
}