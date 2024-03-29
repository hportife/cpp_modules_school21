#ifndef CPP_MODULES_SCHOOL21_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULES_SCHOOL21_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	static int count;
	PresidentialPardonForm();

	PresidentialPardonForm(const std::string &target);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	void info(ShrubberyCreationForm &shubbery) const;
	void info() const;
	const std::string &getTarget() const;
};


#endif //CPP_MODULES_SCHOOL21_PRESIDENTIALPARDONFORM_HPP
