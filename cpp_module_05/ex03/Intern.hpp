#ifndef CPP_MODULES_SCHOOL21_INTERN_HPP
#define CPP_MODULES_SCHOOL21_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
	Intern();
	virtual ~Intern();

	Intern &operator=(const Intern &other);
	Intern(const Intern &other);

	Form*	makeForm(const std::string &name, const std::string &target);
	class WrongFormNameException : public std::exception
	{
	private:
		std::string _error;
	public:
		WrongFormNameException(const std::string &error);
		~WrongFormNameException() throw();
		const char *what() const throw();
	};
};


#endif //CPP_MODULES_SCHOOL21_INTERN_HPP
