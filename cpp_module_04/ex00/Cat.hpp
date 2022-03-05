#ifndef CPP_MODULES_SCHOOL21_CAT_HPP
#define CPP_MODULES_SCHOOL21_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    ~Cat(void);

    void makeSound(void) const;
};


#endif //CPP_MODULES_SCHOOL21_CAT_HPP
