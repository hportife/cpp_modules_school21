#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string weapon_type;

public:
	Weapon(std::string weapon);
	~Weapon();

	std::string getType(void);
	void setType(std::string type);
};

#endif //EX03_WEAPON_HPP
