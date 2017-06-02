#include "OS.hpp"
// #include <iostream>

int     main(void)
{
    OS os = OS();
    std::string osName = os.getOSName();
    std::string osArch = os.getOSArchitecture();

    std::cout << osName << std::endl;
    std::cout << osArch << std::endl;

    return (0);
}