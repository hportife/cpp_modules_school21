#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
	this->zombie_name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombies = new Zombie[N];

	while (N > 0)
	{
		zombies[N--].set_name(name);
	}
	return (zombies);
}