#ifndef CPP_MODULES_SCHOOL21_BUREAUCRAT_HPP
#define CPP_MODULES_SCHOOL21_BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <exception>

class Form;

class Bureaucrat {
private:
    std::string	_name;
    int		    _grade;

public:
//constr
    Bureaucrat(std::string name, int range);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat & operator=(Bureaucrat const &);
//destr
    virtual ~Bureaucrat();
//geetters
    std::string	getName() const;
    int		    getGrade() const;
//inc/decr
    void	    gradeIncrement();
    void	    gradeDecrement();
//sign form
    void 	    signForm(Form &form);
// exec
    bool				execute(const Form &form);
//exception
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException();
        ~GradeTooHighException() throw();

        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException();
        ~GradeTooLowException() throw();

        const char *what() const throw();
    };
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &bur);


#endif //CPP_MODULES_SCHOOL21_BUREAUCRAT_HPP
