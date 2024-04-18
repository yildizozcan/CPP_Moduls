#ifndef __ROBOTOMYREQUESTFORM_HPP
#define __ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm& other);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(RobotomyRequestForm& other);
        void execute(Bureaucrat const & executor) const;
};

#endif