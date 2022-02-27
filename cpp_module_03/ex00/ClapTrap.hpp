#ifndef CPP_MODULES_SCHOOL21_CLAPTRAP_HPP
#define CPP_MODULES_SCHOOL21_CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string some_name);
	ClapTrap(ClapTrap const &some_ct);

	~ClapTrap();

	ClapTrap const& operator=(ClapTrap const & assign);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
};

#endif //CPP_MODULES_SCHOOL21_CLAPTRAP_HPP
