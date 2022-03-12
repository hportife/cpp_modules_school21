#include "Bureaucrat.hpp"

int	main() {
    try
    {
        Bureaucrat a("Artemiy", 1);
        std::cout << a << std::endl;
        a.gradeDecrement();
        std::cout << a << std::endl;
        a.gradeIncrement();
        std::cout << a << std::endl;
        a.gradeDecrement();
        std::cout << a << std::endl;
        std::cout << "ALL OK" << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "----------------------" << std::endl;
    try
    {
        Bureaucrat b("Vasiliy", 150);
        std::cout << b << std::endl;
        b.gradeIncrement();
        std::cout << b << std::endl;
        b.gradeDecrement();
        std::cout << b << std::endl;
        b.gradeDecrement();
        std::cout << b << std::endl;
        b.gradeDecrement();
        std::cout << b << std::endl;
        std::cout << "ALL OK" << std::endl;
    }
    catch (std::exception & ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return (0);
}