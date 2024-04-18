#include "Bureaucrat.hpp"

int main()
{
    {
        try
        {
            Bureaucrat bureaucrat("Jony", 3);
            std::cout << bureaucrat;

            bureaucrat.incrementGrade();
            std::cout << bureaucrat;

            bureaucrat.incrementGrade();
            std::cout << bureaucrat;

            bureaucrat.incrementGrade();
            std::cout << bureaucrat;
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception : " << RED << e.what() << RESET << std::endl;
        }
    }
    std::cout << "*******************************************" <<std::endl;
    {
        try
        {
            Bureaucrat bureaucrat("Jony", 146);
            std::cout << bureaucrat;
            bureaucrat.decrementGrade();
            bureaucrat.decrementGrade();
            bureaucrat.decrementGrade();
            bureaucrat.decrementGrade();
            std::cout << bureaucrat;

            Bureaucrat bureaucrat2("Rick", 10);
            std::cout << bureaucrat2;
            bureaucrat2 = bureaucrat;
            bureaucrat2.decrementGrade();
            std::cout << bureaucrat2;
        }
        catch (const std::exception &e)
        {
            std::cout << "Exception : " << RED << e.what() << RESET << std::endl;
        }
    }
	return (0);
}
