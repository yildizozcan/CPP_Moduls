#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown bureaucrat"), grade(150) 
{
    std::cout << YELLOW << "Bureaucrat default constructor called." << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    std::cout << YELLOW << "Bureaucrat string,int constructor called." << RESET << std::endl;
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
    std::cout << YELLOW << "Bureaucrat copy constructor called." << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << YELLOW << "Bureaucrat destructor called." << RESET << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << YELLOW << "Bureaucrat assignment operator called." << RESET << std::endl;
    if(this != &other)
    {
        grade = other.grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const
{ 
    return name; 
}

int Bureaucrat::getGrade() const
{ 
    return grade;
}

void Bureaucrat::incrementGrade()
{ 
    if(grade <= 1)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade()
{ 
    if(grade >= 150)
        throw GradeTooLowException();
    else
        grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return RED "Grade is too high!" RESET;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return RED "Grade is too low!" RESET;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat)
{
    os << DARKBLUE << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << RESET << std::endl;
    return os;
}

