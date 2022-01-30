#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
	std::string	zombie_name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void anounce(void);
	void set_name(std::string name);
};

	Zombie* newZombie( std::string name );
	Zombie* zombieHorde( int N, std::string name );
#endif //EX00_ZOMBIE_HPP
