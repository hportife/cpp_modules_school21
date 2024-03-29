#include "Form.hpp"

Form::Form(const std::string &formName, const int gradeSign, const int gradeExecute) :
formName(formName),
sign(false),
gradeSign(gradeSign),
gradeExecute(gradeExecute)
{
    if (gradeSign > 150)
        throw Form::GradeTooLowException("Small grade sign");
    if (gradeSign < 1)
        throw Form::GradeTooHighException("Big grade sign");
    if (gradeExecute > 150)
        throw Form::GradeTooLowException("Small grade sign execute");
    if (gradeExecute < 1)
        throw Form::GradeTooHighException("Big grade sign execute");
}

Form::~Form() {}

const std::string &Form::getFormName() const {
    return formName;
}

bool Form::isSign() const {
    return sign;
}

int Form::getGradeSign() const {
    return gradeSign;
}

int Form::getGradeExecute() const {
    return gradeExecute;
}

Form &Form::operator=(const Form &other) {
    this->sign = other.isSign();
    this->formName = other.getFormName();
    this->gradeExecute = other.getGradeExecute();
    this->gradeSign = other.getGradeSign();
    return *this;
}

Form::Form(const Form &other) {
    this->sign = other.isSign();
    this->formName = other.getFormName();
    this->gradeExecute = other.getGradeExecute();
    this->gradeSign = other.getGradeSign();
}

void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= this->gradeSign)
        this->sign = true;
    else
        throw Form::GradeTooLowException("Bureaucrat gradle less than necessary");
}



Form::GradeTooHighException::GradeTooHighException(const std::string &error) {
    std::cout << error << std::endl;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw() {
    return this->error.c_str();
}




Form::GradeTooLowException::GradeTooLowException(const std::string &error) {
    std::cout << error << std::endl;
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
    return this->error.c_str();
}


std::ostream &operator<<(std::ostream &os, const Form &form) {
    os <<"Form name: " << form.getFormName() << ", sign: " << (form.isSign() ? "\033[32m" : "\033[31m") << form.isSign()
    << ", grade sign: " << form.getGradeSign() << ", grade execute: " << form.getGradeExecute();
    return os;
}