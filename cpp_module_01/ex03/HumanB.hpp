#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	string	_name;
	Weapon	*_herWeapon;
public:
	HumanB(string name);
	~HumanB();

	void	setWeapon(Weapon &herWeapon);
	void	attack(void);
};

#endif //EX03_HUMANB_HPP
