#ifndef CPP_MODULES_SCHOOL21_WRONGWANIMAL_HPP
#define CPP_MODULES_SCHOOL21_WRONGWANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal(void);
    WrongAnimal(std::string some_type);
    WrongAnimal(WrongAnimal const &);
    ~WrongAnimal(void);

    std::string getType(void) const;
    void makeSound(void) const;

protected:
    std::string type;
};


#endif
