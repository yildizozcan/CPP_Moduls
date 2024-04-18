#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Unknown")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other), target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
    if(this != &other)
    {
        target = other.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!getIsSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << GREEN "*drilling noises*...zzztttttttvvv...bang bang..." RESET << std::endl;
    srand(time(0));
    if(rand() % 2)
        std::cout << DARKBLUE << target << " has been robotomized successfully" RESET << std::endl;
    else
        std::cout << DARKBLUE "Robotomization of " << target << " has failed" RESET << std::endl;
}