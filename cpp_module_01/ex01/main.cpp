#include "Zombie.hpp"

int main(void)
{
	Zombie*	zombies = zombieHorde(15, "Slave");
	for (int i = 0; i < 15; i++)
		zombies[i].anounce();
	delete [] zombies;
	return (0);
}