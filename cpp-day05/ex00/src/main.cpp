
#include "Bureaucrat.h"

int main()
{
    try
    {
        Bureaucrat t("lol", 1000);
        std::cout << "visiblement ca foncitonne ";
    }
    catch (std::exception e)
    {
        std::cout << "AAAAAHHH C E PT ";
    }
    return 0;
}
