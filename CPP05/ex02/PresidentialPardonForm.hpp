#ifndef __PRESIDENTIALPARDONFORM_HPP
#define __PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm& other);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(PresidentialPardonForm& other);
        void execute(Bureaucrat const & executor) const;
};

#endif