#ifndef CPP_MODULES_SCHOOL21_CURE_HPP
#define CPP_MODULES_SCHOOL21_CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure const & tmp);
    Cure const& operator=(Cure const &);
    ~Cure();

    AMateria	*clone() const;
    void		use(ICharacter&);
};

#endif //CPP_MODULES_SCHOOL21_CURE_HPP
