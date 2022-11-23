#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#pragma once
#include <string>
#include "Form.h"
class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(std::string name);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &cpy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
    void action(const Bureaucrat &executor) const;

private:
};

#endif