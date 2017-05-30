#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat b1 = Bureaucrat("John", 142);
    Bureaucrat b2 = Bureaucrat("Jane", 150);
    Bureaucrat b3 = Bureaucrat("Bestest");

    std::cout << b1;
    std::cout << b2;
    std::cout << b3;

    std::cout << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << std::endl;

    b3.setGrade(1);

    std::cout << b1;
    std::cout << b2;
    std::cout << b3;

    std::cout << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << std::endl;

    b1.decrementGrade();
    b2.incrementGrade();
    b3.decrementGrade();

    std::cout << b1;
    std::cout << b2;
    std::cout << b3;

    std::cout << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << std::endl;

    b3.incrementGrade();

    std::cout << b1;
    std::cout << b2;
    std::cout << b3;

    std::cout << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << std::endl;

    try
    {
        b3.incrementGrade();
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    std::cout << b1;
    std::cout << b2;
    std::cout << b3;

    std::cout << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << std::endl;

    return (0);
}