#ifndef CPP_MODULES_SCHOOL21_CHARACTER_HPP
#define CPP_MODULES_SCHOOL21_CHARACTER_HPP

#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria    *invetory[4];
    int         number;
public:
    Character();
    Character(std::string const & name);
    Character(Character const & tmp);
    Character const& operator=(Character const &);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};


#endif //CPP_MODULES_SCHOOL21_CHARACTER_HPP
