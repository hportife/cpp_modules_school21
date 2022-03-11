#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) {
    std::cout << "$DBG: Bureaucrat constructor called \n";
    _name = name;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
    std::cout << "$DBG: Bureaucrat copy called \n";
    *this = copy;
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& tmp) {
    std::cout << "$DBG: Bureaucrat [=] operator called \n";
    this->_name = tmp._name;
    this->_grade = tmp._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "$DBG: Bureaucrat destructor called \n";
}

// Getters

int	Bureaucrat::getGrade() const {
    return (this->_grade);
}

std::string	Bureaucrat::getName() const {
    return (this->_name);
}

// Increments

void	Bureaucrat::gradeIncrement() {
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "$DBG: Bureaucrat grade increment\n";
    _grade--;
}

void	Bureaucrat::gradeDecrement() {
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "$DBG: Bureaucrat grade decrement\n";
    _grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("The grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("The grade is too low!");
}

ostream&	operator<<(ostream &out, const Bureaucrat &bur) {
    out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
    return (out);
}
//test