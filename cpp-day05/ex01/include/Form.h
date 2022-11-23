#ifndef FORM_H
#define FORM_H

#pragma once
#include <string>
#include <iostream>
#include <ostream>
class Form;
#include "Bureaucrat.h"

class Form
{
public:
    Form(std::string _name, int _rungSign, int _rungexec);
    ~Form();
    Form(Form &cpy);
    Form &operator=(const Form &assign);

    class GradeTooHighException : public std::exception
    {
    public:
        std::string what();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        std::string what();
    };

    // accesseurs
    std::string getName();
    int getRungSign();
    int getRungExec();
    bool getIsSigned();

    // mutateur
    void beSigned(Bureaucrat &b);

private:
    std::string _name;
    int const _rungSign;
    int const _rungexec;
    bool _isSigned;
};
std::ostream &operator<<(std::ostream &o, Form &gens);

#endif