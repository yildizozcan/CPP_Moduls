#include "AForm.hpp"

AForm::AForm() : name("Empty AForm"), isSigned(false), gradeToSign(150), gradeToExecute(150)
{
    std::cout << YELLOW << "AForm default constructor called." << RESET << std::endl;
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << YELLOW << "AForm string,int,int constructor called." << RESET << std::endl;
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if(gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
    std::cout << YELLOW << "AForm copy constructor called." << RESET << std::endl;
}

AForm::~AForm()
{
    std::cout << YELLOW << "AForm destructor called." << RESET << std::endl;
}

AForm& AForm::operator=(AForm& other)
{
    std::cout << YELLOW << "AForm assignment operator called." << RESET << std::endl;
    if(this != &other)
    {
        isSigned = other.isSigned;
    }
    return *this;
}

std::string AForm::getName() const
{
    return name;
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

int AForm::getGradeToSign() const
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return gradeToExecute;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{   
    if(isSigned)
        std::cout << RED << "AForm is already signed." << RESET << std::endl;
    else if(bureaucrat.getGrade() > this->gradeToSign)
        throw AForm::GradeTooLowException();
    else
    {
        isSigned = true;
        std::cout << DARKBLUE << "AForm is signed." <<  RESET  << "✅" << std::endl;
    }
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return RED "Grade is too high!" RESET "❌";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return RED "Grade is too low!" RESET "❌";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return RED "Form is not signed!" RESET "❌";
}

std::ostream& operator<<(std::ostream& os, AForm& AForm)
{
    os << "📝AForm name: " << AForm.getName() << std::endl;
    os << "🖊️ Is signed: " << AForm.getIsSigned() << std::endl;
    os << "Grade to sign: " << AForm.getGradeToSign() << std::endl;
    os << "Grade to execute: " << AForm.getGradeToExecute() << std::endl;
    return os;
}