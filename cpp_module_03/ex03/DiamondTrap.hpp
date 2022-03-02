#ifndef CPP_MODULES_SCHOOL21_DIAMONDTRAP_HPP
#define CPP_MODULES_SCHOOL21_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    ~DiamondTrap(void);

    void whoAmI();
};

#endif //CPP_MODULES_SCHOOL21_DIAMONDTRAP_HPP
