#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
	std::string	zombie_name;

public:
	Zombie(std::string name);
	~Zombie(void);

	void anounce(void);

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
};

#endif //EX00_ZOMBIE_HPP
