#include "Bureaucrat.h"
#include "Form.h"

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

int Bureaucrat::getGrade() const
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

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch (...)
    {
        std::cout << _name << " make shit whit " << form.getName() << std::endl;
    }
}

void Bureaucrat::signForm(Form &form)
{
    std::cout << _name;
    try
    {
        if (form.getIsSigned())
            std::cout << " couldn’t sign" << form.getName() << "because somoby already signe it " << std::endl;
        else
        {
            form.beSigned(*this);
            std::cout << " signed " << form.getName() << std::endl;
        }
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << " couldn’t sign" << form.getName() << " because ";
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assignp)
{
    return *this;
}

std::string Bureaucrat::GradeTooHighException::what()
{
    return " u can t go higer";
}

std::string Bureaucrat::GradeTooLowException::what()
{
    return " u can t go lower";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &gens)
{
    o << gens.getName() << ", bureaucrat grade " << gens.getGrade();
    return o;
}
