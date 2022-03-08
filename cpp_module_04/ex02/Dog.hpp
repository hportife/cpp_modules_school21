#ifndef CPP_MODULES_SCHOOL21_DOG_HPP
#define CPP_MODULES_SCHOOL21_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    Dog(std::string str);
    Dog(Dog const & tmp);
    ~Dog(void);

    Dog const& operator=(Dog const& assign);

    void makeSound(void) const;
    void	getType(void);

private:
	Brain	*BrainArr;
};


#endif //CPP_MODULES_SCHOOL21_DOG_HPP
