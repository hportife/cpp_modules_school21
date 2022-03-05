#ifndef CPP_MODULES_SCHOOL21_CAT_HPP
#define CPP_MODULES_SCHOOL21_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    ~Cat(void);

    void makeSound(void) const;

private:
    Brain *BrainArr;
};


#endif //CPP_MODULES_SCHOOL21_CAT_HPP
