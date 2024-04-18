#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default") {}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) {}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) : AForm(other), target(other.target) {}


PresidentialPardonForm::~PresidentialPardonForm() {}


PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
    if(this != &other)
    {
        target = other.target;
    }
    return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(!getIsSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << DARKBLUE <<target << " has been pardoned by Zafod Beeblebrox" << RESET << std::endl;
}