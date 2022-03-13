#ifndef CPP_MODULES_SCHOOL21_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULES_SCHOOL21_ROBOTOMYREQUESTFORM_HPP


class RobotomyRequestForm {
private:
    std::string target;
public:
    static int count;
    RobotomyRequestForm();

    RobotomyRequestForm(const std::string &target);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
    RobotomyRequestForm(const RobotomyRequestForm &other);

    void info() const;
    void info(ShrubberyCreationForm &shubbery) const;
};


#endif //CPP_MODULES_SCHOOL21_ROBOTOMYREQUESTFORM_HPP
