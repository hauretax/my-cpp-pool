#include "Form.h"

Form::Form(std::string name, int rungSign, int rungexec) : _name(name), _rungSign(rungSign), _rungexec(rungexec), _isSigned(false)
{
    if (rungexec > 150 || rungSign > 150)
    {
        throw Form::GradeTooLowException();
    }
    if (rungSign < 1 || rungexec < 1)
    {
        throw Form::GradeTooHighException();
    }
}

Form::~Form()
{
}

std::string Form::getName()
{
    return _name;
}
int Form::getRungSign()
{
    return _rungSign;
}
int Form::getRungExec()
{
    return _rungexec;
    ;
}
bool Form::getIsSigned()
{
    return _isSigned;
}

// mutateur
void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > getRungSign())
        throw Form::GradeTooLowException();
    _isSigned = true;
}

// exception
std::string Form::GradeTooHighException::what()
{
    return "grad is to high";
}

std::string Form::GradeTooLowException::what()
{
    return "grade is to low";
}

std::ostream &operator<<(std::ostream &o, Form &forms)
{
    if (forms.getIsSigned())
        o << forms.getName() << ", form is signed";
    else
        o << forms.getName() << ", form is not signed";

    return o;
}


