#include "Form.hpp"

Form::Form() : name("Empty form"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << YELLOW << "Form default constructor called." << RESET << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << YELLOW << "Form string,int,int constructor called." << RESET << std::endl;
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if(gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << YELLOW << "Form copy constructor called." << RESET << std::endl;
}

Form::~Form()
{
    std::cout << YELLOW << "Form destructor called." << RESET << std::endl;
}

Form& Form::operator=(Form& other)
{
    std::cout << YELLOW << "Form assignment operator called." << RESET << std::endl;
    if(this != &other)
    {
        isSigned = other.isSigned;
    }
    return *this;
}

std::string Form::getName() const
{
    return name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExecute() const
{
    return gradeToExecute;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{   
    if(isSigned)
        std::cout << RED << "Form is already signed." << RESET << std::endl;
    else if(bureaucrat.getGrade() > this->gradeToSign)
        throw Form::GradeTooLowException();
    else
    {
        isSigned = true;
        std::cout << DARKBLUE << "Form is signed." <<  RESET  << "✅" << std::endl;
    }
}

const char* Form::GradeTooHighException::what() const throw()
{
    return RED "Grade is too high!" RESET "❌";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return RED "Grade is too low!" RESET "❌";
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
    os << "📝Form name: " << form.getName() << std::endl;
    os << "🖊️ Is signed: " << form.getIsSigned() << std::endl;
    os << "Grade to sign: " << form.getGradeToSign() << std::endl;
    os << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    return os;
}