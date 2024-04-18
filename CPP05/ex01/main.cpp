#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
	{
		Form form1("Application form", 5, 140);
		Form form2("Order form", 5, 50);
		Bureaucrat bureaucrat1("1. Bureaucrat", 1);
		Bureaucrat bureaucrat2("2. Bureaucrat", 100);

		std::cout << form1;
		form1.beSigned(bureaucrat1);
		std::cout << form1;

		std::cout << PINK << "-------------------" << RESET << std::endl;

        std::cout << form2;
		bureaucrat2.signForm(form2);
        std::cout << form2;

		std::cout << PINK << "-------------------" << RESET << std::endl;

		bureaucrat1.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception : " << e.what() << '\n';
	}
}