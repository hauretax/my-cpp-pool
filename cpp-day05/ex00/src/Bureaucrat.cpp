#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int echelon) : _name(name)
{
    if(_echelon  > 150){
        throw std::exception();
    }
    _echelon = echelon;
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy): _name(cpy._name), _echelon(cpy._echelon)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assignp)
{
    return *this;
}
