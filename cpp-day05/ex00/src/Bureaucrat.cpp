#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int echelon) : _name(name)
{
    // if (_echelon > 150)
    // {
    //     throw std::exception();
    // }
    // _echelon = echelon;



    try
    {
        std::cout << "visiblement ca foncitonne ";
        throw Bureaucrat::test();
    }
    catch (Bureaucrat::test & e)
    {
        std::cout << "AAAAAHHH C E PT ";
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) : _name(cpy._name), _echelon(cpy._echelon)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assignp)
{
    return *this;
}

std::string Bureaucrat::test::what()
{
    return "YOOOOOOOOOOOOOOOOOOO";
}
