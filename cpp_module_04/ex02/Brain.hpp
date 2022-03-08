#ifndef CPP_MODULES_SCHOOL21_BRAIN_HPP
#define CPP_MODULES_SCHOOL21_BRAIN_HPP

#include <iostream>

class Brain {
protected:
    std::string	_ideas[100];
public:
    Brain(void);
    Brain(std::string str);
    virtual ~Brain();
};


#endif //CPP_MODULES_SCHOOL21_BRAIN_HPP
