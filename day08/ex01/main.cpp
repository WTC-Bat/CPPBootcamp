#include "span.hpp"

int     main(int argc, char **argv)
{
    Span spanA = Span(2);
    spanA.addNumber(13);
    spanA.addNumber(42);
    
    try
    {
        spanA.addNumber(1241);
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
}