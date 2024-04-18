#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    try
    {
        ShrubberyCreationForm form("target");
        Bureaucrat jim("Jim",130);
        jim.signForm(form);
        form.execute(jim);

		std::cout << PINK << "-------------------" << RESET << std::endl;

		RobotomyRequestForm form2("target");
		Bureaucrat john("John",1);
		john.signForm(form2);
		form2.execute(john);

		std::cout << PINK << "-------------------" << RESET << std::endl;

		PresidentialPardonForm form3("target");
		Bureaucrat david("David",5);
		david.signForm(form3);
		form3.execute(david);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}