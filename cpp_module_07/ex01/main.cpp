#include "iter.hpp"

int		main() {
    int	int1[] = {4, 5, 8, 10};
    int	int2[] = {4, 5, 8, 10};
    std::cout << "arr1: ";
    print_array(int1, 4);
    std::cout << "arr2: ";
    print_array(int2, 4);
    std::cout << "iter\n";
    iter(int1, 4, ::increment);
    iter(int2, 4, ::decrement);
    std::cout << "arr1: ";
    print_array(int1, 4);
    std::cout << "arr2: ";
    print_array(int2, 4);
}