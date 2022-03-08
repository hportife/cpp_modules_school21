#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	BrainArr = new Brain("Dog idea");
	std::cout << "Dog Default constructor call\n";
}

Dog::Dog(std::string str) : Animal("Dog")
{
	BrainArr = new Brain(str);
	std::cout << "Dog ideas constructor called\n";
}

Dog::Dog(Dog const & tmp) {
	BrainArr = NULL;
	*this = tmp;
	std::cout << "Dog copy called\n";
}

Dog const& Dog::operator=(Dog const& assign) {
	if (BrainArr)
		delete BrainArr;
	BrainArr = new Brain;
	this->type = assign.type;
	*(this->BrainArr) = *(assign.BrainArr);
	std::cout << "Dog [=] operator called\n";
	return *this;
}

Dog::~Dog(void)
{
	delete BrainArr;
	std::cout << "Dog destructor call\n";
}

void Dog::makeSound(void) const
{
    std::cout << "BARK!\n";
}