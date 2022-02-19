#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon	&_hisWeapon;
	string	_name;
public:
	HumanA(string name, Weapon& hisWeapon);
	~HumanA();

	void	attack(void);
};

#endif //EX03_HUMANA_HPP
