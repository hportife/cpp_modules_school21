#include "ScavTrap.hpp"

int main( void ) {
    ClapTrap a("Slave");
    ScavTrap b("Master");

    b.guardGate();

    a.attack("Master");
    b.attack("Slave");
    a.beRepaired(10);
    b.beRepaired(20);
    return 0;
}