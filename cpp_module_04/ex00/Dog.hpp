#ifndef CPP_MODULES_SCHOOL21_DOG_HPP
#define CPP_MODULES_SCHOOL21_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    ~Dog(void);

    void makeSound(void);
};


#endif //CPP_MODULES_SCHOOL21_DOG_HPP
