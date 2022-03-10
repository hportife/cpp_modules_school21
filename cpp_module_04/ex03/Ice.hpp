#ifndef CPP_MODULES_SCHOOL21_ICE_HPP
#define CPP_MODULES_SCHOOL21_ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice const & tmp);
    Ice const& operator=(Ice const &);
    ~Ice();

    AMateria	*clone() const;
    void		use(ICharacter&);
};


#endif //CPP_MODULES_SCHOOL21_ICE_HPP
