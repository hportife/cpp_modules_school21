#ifndef CPP_MODULES_SCHOOL21_MATERIASOURCE_HPP
#define CPP_MODULES_SCHOOL21_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

# define SOURCES	4

class MateriaSource : public IMateriaSource
{
private:
    AMateria	*source[SOURCES];

public:
    MateriaSource();
    MateriaSource(MateriaSource const & copy);
    MateriaSource const& operator=(MateriaSource const& assign);
    ~MateriaSource();

    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};


#endif //CPP_MODULES_SCHOOL21_MATERIASOURCE_HPP
