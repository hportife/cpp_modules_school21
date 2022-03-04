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

    std::string getType(void);
    void makeSound(void);

protected:
    std::string type;
};

#endif //CPP_MODULES_SCHOOL21_ANIMAL_HPP
