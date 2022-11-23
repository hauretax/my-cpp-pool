#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#pragma once
#include <string>
#include "Form.h"
class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(std::string name, std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &cpy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
    virtual void execute(Bureaucrat const &executor) const;

private:
};

#endif