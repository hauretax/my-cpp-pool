#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#pragma once
#include "Form.h"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string name, std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm &cpy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
    virtual void execute(Bureaucrat const &executor) const;

private:
};

#endif