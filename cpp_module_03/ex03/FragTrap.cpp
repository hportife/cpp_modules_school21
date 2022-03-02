#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Epmty", 100, 100, 30)
{
    std::cout << "FragTrap empty constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << name << " constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

void	FragTrap::highFivesGuys(void) {
    std::cout << "Hey guys! Gimme a five!\n";
}