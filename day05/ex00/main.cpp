#include "Bureaucrat.hpp"

#include <sstream>

static std::string  toString(int i)
{
    std::stringstream strstream;

    strstream << i;

    return (strstream.str());
}

int     main(void)
{
    Bureaucrat b = Bureaucrat("John", 142);

    std::cout << "Name: " << b.getName() << std::endl;
    std::cout << "Score: " << toString(b.getScore()) << std::endl;
}