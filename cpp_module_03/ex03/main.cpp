#include "DiamondTrap.hpp"

int main( void ) {
    DiamondTrap def;
    std::cout << "___________________\n\n";
    DiamondTrap d("meister");
    std::cout << "___________________\n\n";
    d.attack(def.getName());

    d.whoAmI();
    return 0;
}