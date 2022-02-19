#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Weapon {
private:
	string	_type;
public:
	Weapon(string const &type);
	Weapon(void);
	~Weapon(void);

	string const&	getType(void);
	void	setType(string type);
};



#endif //EX03_WEAPON_HPP
