#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    BrainArr = new Brain("cat idea");
    std::cout << "Cat Default constructor call\n";
}

Cat::Cat(std::string str) : Animal("Cat")
{
	BrainArr = new Brain(str);
	std::cout << "Cat ideas constructor called\n";
}

Cat::Cat(Cat const & tmp) {
	BrainArr = NULL;
	*this = tmp;
	std::cout << "Cat copy called\n";
}

Cat const& Cat::operator=(Cat const& assign) {
	if (BrainArr)
		delete BrainArr;
	BrainArr = new Brain;
	this->type = assign.type;
	*(this->BrainArr) = *(assign.BrainArr);
	std::cout << "Cat [=] operator called\n";
	return *this;
}

Cat::~Cat(void)
{
	delete BrainArr;
    std::cout << "cat destructor call\n";
}

void Cat::makeSound(void) const
{
    std::cout << "MEOW!\n";
}