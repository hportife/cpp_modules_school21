#ifndef CPP_MODULES_SCHOOL21_BUREAUCRAT_HPP
#define CPP_MODULES_SCHOOL21_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
private:
    std::string	_name;
    int		    _grade;

public:
    Bureaucrat(std::string name, int range);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat const& operator=(Bureaucrat const &);
    ~Bureaucrat();

    std::string	getName() const;
    int		getGrade() const;
    void	gradeIncrement();
    void	gradeDecrement();

    class GradeTooHighException : public exception {
    public:
        GradeTooHighException();
        ~GradeTooHighException() throw();

        const char *what() const throw();
    };
    class GradeTooLowException : public exception {
    public:
        GradeTooLowException();
        ~GradeTooLowException() throw();

        const char *what() const throw();
    };
};

ostream&	operator<<(ostream &out, const Bureaucrat &bur);


#endif //CPP_MODULES_SCHOOL21_BUREAUCRAT_HPP
