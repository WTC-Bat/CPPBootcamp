#include "OS.hpp"
// #include <iostream>

int     main(void)
{
    OS os = OS();
    std::string osName = os.getOSName();

    // std::string osName = getOSName();
    std::cout << osName << std::endl;
    
    return (0);
}