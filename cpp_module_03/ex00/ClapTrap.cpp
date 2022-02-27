#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "nonamed";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "created noname ClapTrap\n";
}

ClapTrap::ClapTrap(std::string some_name)
{
	name = some_name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "created " << name << " ClapTrap\n";
}

ClapTrap::ClapTrap(ClapTrap const &some_ct)
{
	*this = some_ct;
	std::cout << "Copy called\n";
}

ClapTrap::~ClapTrap() {cout << "Destructor called\n";}

ClapTrap const& ClapTrap::operator=(ClapTrap const& assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
	cout << "[=] operator called\n";
	return *this;
}