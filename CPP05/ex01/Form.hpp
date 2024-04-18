#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include "Bureaucrat.hpp"
#include "Clours.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool isSigned;//İmzalı olup olmadığını gösteren bir boolean (yapıda, değil).
        const int gradeToSign;//İmzalamak için gereken sabit bir not.
        const int gradeToExecute;//Çalıştırmak için gereken sabit bir not.

    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form& other);
        ~Form();
        Form& operator=(Form& other);

        std::string getName() const;

        bool getIsSigned() const;

        int getGradeToSign() const;

        int getGradeToExecute() const;

        void beSigned(Bureaucrat& bureaucrat);
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, Form& form);

#endif