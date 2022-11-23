#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#pragma once
#include "Form.h"
#include <random>
#include <ctime>


class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(std::string name, std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm &cpy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
    virtual void execute(Bureaucrat const &executor) const;

private:
};

#endif