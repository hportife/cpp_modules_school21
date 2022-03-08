#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(const std::string &type)
{
	type = type;
	std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	std::cout << "AMateria copy called\n";
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destroyer called\n";
}

AMateria &AMateria::operator=(const AMateria &other) {
	this->type = other.type;
	return *this;
}

const std::string &AMateria::getType() const
{
	return (this->type);
}