#ifndef CPP_MODULES_SCHOOL21_EASYFIND_HPP
#define CPP_MODULES_SCHOOL21_EASYFIND_HPP
#define DEFAULT		"\033[0m"
#define RED			"\033[31m"
#define GREEN		"\033[32m"

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &container, int num)
{
    std::vector<int>::iterator ret = std::find(container.begin(), container.end(), num);
    if (ret != container.end())
        return ret;
    throw std::exception();
}


#endif //CPP_MODULES_SCHOOL21_EASYFIND_HPP
