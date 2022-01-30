#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string ha_name;
	Weapon*		weapon_type;

public:
	HumanA(std::string name, Weapon type);
	~HumanA();
	void attack(void);
};

#endif //EX03_HUMANA_HPP
