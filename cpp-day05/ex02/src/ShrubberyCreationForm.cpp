#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target): Form(name, 145, 137) 
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
void ShrubberyCreationForm::execute(Bureaucrat const &executor)const {
    std::cout << "fait un arbre" << std::endl;
}