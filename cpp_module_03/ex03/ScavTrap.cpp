#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("Epmty", 100, 50, 20)
{
    std::cout << "ScavTrap empty constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50,  0 of 20)
{
    std::cout << "ScavTrap " << name << " constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

void	ScavTrap::attack(std::string const & target) const {
    std::cout << "ScavTrap " << name << " attack " << target \
		 << ", causing " << attackDamage << " of damage!\n";
}

void	ScavTrap::guardGate(void) {
    std::cout << "I am just a misrable gate keeper...\n";
}