#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called\n";
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "some idea $i";
}

Brain::Brain(std::string str) {
    std::cout << "Brain constructor with string called\n";
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = str;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}