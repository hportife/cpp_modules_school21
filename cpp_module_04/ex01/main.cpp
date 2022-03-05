#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *ii = new Cat();
        const Animal *j = new Dog();
        const WrongAnimal *i = new WrongCat();
        const WrongAnimal *wrongmeta = new WrongAnimal();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        ii->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        i->makeSound();
        wrongmeta->makeSound();
        delete meta;
        delete ii;
        delete j;
        delete i;
        delete wrongmeta;
    }
    std::cout << "\n\n------------------------\n\n";
    {
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j;
        delete i;
        return 0;
    }
}