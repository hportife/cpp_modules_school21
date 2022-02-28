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

ClapTrap::ClapTrap(std::string name, int hitpoints, int energyPoints, int attackDamage) :
        name(name),
        hitPoints(hitpoints),
        energyPoints(energyPoints),
        attackDamage(attackDamage)
{
    std::cout << "created " << name << " ClapTrap with"
                << hitpoints << " hp, " << energyPoints
                << " energy points and " << attackDamage
                << " attack damage\n";
}

ClapTrap::~ClapTrap() {std::cout << "Destructor called\n";}

ClapTrap const& ClapTrap::operator=(ClapTrap const& assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;
    std::cout << "[=] operator called\n";
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attack " << target
		 << ", causing " << attackDamage << " of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " takes " << amount
		 << " of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << name << " repiered " << amount
		 << " health points!\n";
}