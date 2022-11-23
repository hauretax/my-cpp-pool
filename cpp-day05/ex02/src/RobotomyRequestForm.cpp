#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

    std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_variable = std::rand();

    this->Form::execute(executor);
    std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
    if (random_variable % 2)
        std::cout << getTarget() << " a ete robotomisee" << std::endl;
    else
        std::cout << getTarget() << "l'operation a echouer" << std::endl;
}