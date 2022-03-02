#ifndef CPP_MODULES_SCHOOL21_FRAGTRAP_HPP
#define CPP_MODULES_SCHOOL21_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);

    void	highFivesGuys(void);
};

#endif //CPP_MODULES_SCHOOL21_FRAGTRAP_HPP
