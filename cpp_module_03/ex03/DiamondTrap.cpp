#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    name = "Monster";
    std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name"), name(name)
{
    std::cout << "DiamondTrap named constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

void	DiamondTrap::whoAmI(void) {
    std::cout << "Am... definitely, who am I?!\n";
}