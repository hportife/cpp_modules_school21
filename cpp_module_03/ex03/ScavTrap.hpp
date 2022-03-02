#ifndef CPP_MODULES_SCHOOL21_SCAVTRAP_HPP
#define CPP_MODULES_SCHOOL21_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(std::string name, int hitpoints, int energyPoints, int attackDamage);
    ~ScavTrap(void);

    void	attack(std::string const & target) const;
    void	guardGate(void);
};

#endif //CPP_MODULES_SCHOOL21_SCAVTRAP_HPP
