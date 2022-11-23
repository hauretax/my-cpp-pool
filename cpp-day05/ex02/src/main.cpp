
#include "Bureaucrat.h"
#include "Form.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "ShrubberyCreationForm.h"

int main()
{

    try
    {
      RobotomyRequestForm t("yo","boby");
      PresidentialPardonForm a("as", "been");
      ShrubberyCreationForm c("as", "been");
      Bureaucrat b("a", 1);
      t.beSigned(b);
      t.execute(b);

      a.beSigned(b);
      a.execute(b);

      c.beSigned(b);
      b.executeForm(c);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
      catch (Form::alreadySignedException &e)
    {
        std::cout << e.what() << std::endl;
    }
      catch (Form::notSignedException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}