#ifndef CPP_MODULES_SCHOOL21_WRONGCAT_HPP
#define CPP_MODULES_SCHOOL21_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    ~WrongCat(void);

    void makeSound(void) const;
};


#endif //CPP_MODULES_SCHOOL21_WRONGCAT_HPP
