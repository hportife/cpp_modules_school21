#ifndef CPP_MODULES_SCHOOL21_CAT_HPP
#define CPP_MODULES_SCHOOL21_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(std::string str);
    Cat(Cat const & tmp);
    ~Cat(void);

    Cat const& operator=(Cat const& assign);

    void makeSound(void) const;
    void getType(void);

private:
    Brain *BrainArr;
};


#endif //CPP_MODULES_SCHOOL21_CAT_HPP
