#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Unknown")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other) : AForm(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
    if(this != &other)
    {
        target = other.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!getIsSigned())
        throw FormNotSignedException();
    if(executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::ofstream file;
    file.open(target + "_shrubbery");
    file << "         ^         " << std::endl;
    file << "        ^^^        " << std::endl;
    file << "       ^^^^^       " << std::endl;
    file << "      ^^^^^^^      " << std::endl;
    file << "     ^^^^^^^^^     " << std::endl;
    file << "    ^^^^^^^^^^^    " << std::endl;
    file << "   ^^^^^^^^^^^^^   " << std::endl;
    file << "  ^^^^^^^^^^^^^^^  " << std::endl;
    file << " ^^^^^^^^^^^^^^^^^ " << std::endl;
    file << "^^^^^^^^^^^^^^^^^^^" << std::endl;
    file << "        |||        " << std::endl;
    file << "        |||        " << std::endl;
    file << std::endl;
    file.close();
}
