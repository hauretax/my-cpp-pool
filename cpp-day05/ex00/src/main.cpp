
#include "Bureaucrat.h"

int main()
{

    try
    {
        Bureaucrat t("lol", 10);

        std::cout << t.getGrade() << std::endl;
        t.goHiger();
        t.goLower();
        t.goLower();

        std::cout << t.getGrade() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}