#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "DBG: AMateria default constructor called\n";
}

AMateria::AMateria(const std::string &type)
{
	type = type;
	std::cout << "DBG: AMateria typed constructor called\n";
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	std::cout << "DBG: AMateria copy called\n";
}

AMateria::~AMateria(void)
{
	std::cout << "DBG: AMateria destroyer called\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
	this->type = other.type;
    std::cout << "DBG: AMateria operator [=] called\n";
	return *this;
}

const std::string &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << target.getName() << std::endl;
}