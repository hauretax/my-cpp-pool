#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5) 
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
void PresidentialPardonForm::action(const Bureaucrat& executor) const
{
	this->Form::execute(executor);
	std::cout << getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}