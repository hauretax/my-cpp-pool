#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int echelon) : _name(name)
{
    if (echelon > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    if (echelon < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    _echelon = echelon;
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) : _name(cpy._name), _echelon(cpy._echelon)
{
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName()
{
    return _name;
}

int Bureaucrat::getGrade()
{
    return _echelon;
}

void Bureaucrat::goHiger()
{
    if (_echelon == 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    _echelon--;
}

void Bureaucrat::goLower()
{
    if (_echelon == 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    _echelon++;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assignp)
{
    return *this;
}

std::string Bureaucrat::GradeTooHighException::what()
{
    return "sory u can t go higer";
}

std::string Bureaucrat::GradeTooLowException::what()
{
    return "sory u can t go lower";
}
