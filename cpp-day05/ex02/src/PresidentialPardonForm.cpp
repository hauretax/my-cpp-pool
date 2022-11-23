#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : Form(name, 25, 5) 
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->Form::execute(executor);
	std::cout << getTarget() << "a été pardonnée par Zaphod Beeblebrox." << std::endl;
}