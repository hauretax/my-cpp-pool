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
    Form(std::string _name, int _rungSign, int _rungexec, const std::string &target);
    virtual ~Form() = 0;
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
    class alreadySignedException : public std::exception
    {
    public:
        std::string what();
    };
    class notSignedException : public std::exception
    {
    public:
        std::string what();
    };

    // accesseurs
    std::string getName();
    std::string getTarget() const;
    int getRungSign();
     int getRungExec() const;
     bool getIsSigned() const;

    // mutateur
    void beSigned(Bureaucrat &b);
    // action
    void execute(const Bureaucrat &executor) const;

protected:
    const std::string _name;
    const int _rungSign;
    const int _rungexec;
    bool _isSigned;
    const std::string _target;
};
std::ostream &operator<<(std::ostream &o, Form &gens);

#endif