#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
    std::cout << "DBG: Ice default constructor called\n";
}

Ice::Ice(Ice const & copy) : AMateria(copy.type) {
    std::cout << "DBG: Ice copy called\n";
    *this = copy;
}

Ice const& Ice::operator=(Ice const& assign) {
    std::cout << "DBG: Ice [=] operator called\n";
    this->type = assign.type;
    return *this;
}

Ice::~Ice()
{
    std::cout << "DBG: Ice destructor called\n";
}

AMateria	*Ice::clone() const {
    return (new Ice(*this));
}

void	Ice::use(ICharacter& ot) {
    std::cout << " * shoots an ice bolt at " << ot.getName() << " *\n";
}