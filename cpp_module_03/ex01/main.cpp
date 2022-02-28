#include "ScavTrap.hpp"


int main( void ) {
    ClapTrap a("Genshiro");
    ScavTrap b("Nani");

    b.guardGate();

    a.attack("Nani");
    b.attack("Genshiro");
    a.beRepaired(10);
    b.beRepaired(20);
    return 0;
}