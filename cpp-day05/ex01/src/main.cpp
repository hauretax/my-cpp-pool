
#include "Bureaucrat.h"
#include "Form.h"

int main()
{

    try
    {
        Bureaucrat t("michel", 2);

        std::cout << t.getGrade() << std::endl;
        t.goHiger();
        t.goLower();
        t.goLower();

        std::cout << t.getGrade() << std::endl;
        std::cout << t.getName() << std::endl;
        std::cout << t << std::endl;

        Form form("0b200", 50, 55);

        form.beSigned(t);

        Form A250("0b200", 2, 5);

        Bureaucrat a("riri", 100);
        Bureaucrat b("fifi", 1);
        Bureaucrat c("loulou", 1);
        a.signForm(A250);
        b.signForm(A250);
        c.signForm(A250);
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

    return 0;
}