#ifndef __SHRUBBERYCREATIONFORM_HPP
#define __SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& other);
        void execute(Bureaucrat const & executor) const;
};

#endif