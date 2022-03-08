#ifndef CPP_MODULES_SCHOOL21_ANIMAL_HPP
#define CPP_MODULES_SCHOOL21_ANIMAL_HPP

#include <iostream>
class Animal
{
public:
    Animal(void);
    Animal(std::string some_type);
    Animal(Animal const &);
    ~Animal(void);

    Animal const& operator=(Animal const &);

    std::string getType(void) const;
    virtual void makeSound(void) const;

protected:
    std::string type;
};

#endif //CPP_MODULES_SCHOOL21_ANIMAL_HPP
