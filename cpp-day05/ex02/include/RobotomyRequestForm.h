#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#pragma once
#include "Form.h"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(std::string name);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm &cpy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
    virtual void execute(Bureaucrat const &executor) const;

private:
};

#endif