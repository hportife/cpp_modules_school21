#ifndef CPP_MODULES_SCHOOL21_IMATERIASOURCE_HPP
#define CPP_MODULES_SCHOOL21_IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_MODULES_SCHOOL21_IMATERIASOURCE_HPP
