#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		b.gradeDecrement();
		std::cout << b << std::endl;
		b.gradeIncrement();
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

	// Bureaucrat c("Petrovich", 151);

	std::cout << "----------------------" << std::endl;

	try
	{
		Form b("f1", 0, 15);
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout<< ex.what() << std::endl;
	}

	std::cout << "----------------------" << std::endl;

	try
	{
		Form b("f1", 100, 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout<< ex.what()<< std::endl;
	}

	std::cout << "----------------------" << std::endl;

	try
	{
		Form b("f1", 100, 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout<< ex.what()<< std::endl;
	}

	std::cout << "----------------------" << std::endl;

	std::cout << std::endl;
	Form b("f1", 100, 15);
	std::cout << std::endl << b << std::endl;
	Bureaucrat b2("Milan", 10);
	b2.signForm(b);
	std::cout << std::endl << b << std::endl;

	std::cout << "----------------------" << std::endl;

	std::cout << std::endl;
	Form c("f2", 100, 15);
	Bureaucrat c2("Valeriy", 100);
	c2.signForm(c);
	std::cout << std::endl << c << std::endl;
	c2.signForm(c);
	std::cout << std::endl << c << std::endl;

	std::cout << "----------------------" << std::endl;

	std::cout << std::endl;
	Form e("f3", 100, 15);
	Bureaucrat e3("Baiden", 101);
	e3.signForm(e);
	std::cout << std::endl << e << std::endl;
	std::cout << e3 << std::endl;
	e3.gradeIncrement();
	e3.signForm(e);

	return (0);
}