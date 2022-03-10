#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
    std::cout << "DBG: Cure constructor called\n";
}

Cure::Cure(Cure const & copy) : AMateria(copy.type) {
    std::cout << "DBG: Cure copy called\n";
    *this = copy;
}

Cure const& Cure::operator=(Cure const& assign) {
    std::cout << "DBG: Cure [=] operator called\n";
    this->type = assign.type;
    return *this;
}

Cure::~Cure()
{
    std::cout << "DBG: Cure destructor called\n";
}

AMateria	*Cure::clone() const {
    return (new Cure(*this));
}

void	Cure::use(ICharacter& ch) {
    std::cout << "* heals " << ch.getName() << " wounds *\n";
}