#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 72, 45) 
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
void RobotomyRequestForm::execute(Bureaucrat const &executor)const {
    std::cout << "fait un arbre" << std::endl;
}