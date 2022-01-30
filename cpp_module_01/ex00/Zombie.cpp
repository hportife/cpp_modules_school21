#include "Zombie.hpp"

Zombie::Zombie(std::string name) : zombie_name(name)
{
	std::cout << "Zombie " << this->zombie_name << " wake up!\n";
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->zombie_name << " go to programmers!\n";
}

void Zombie::anounce(void)
{
	std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ...\n";
}