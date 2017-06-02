#include "OS.hpp"
#include "User.hpp"
// #include <iostream>

int     main(void)
{
    /*  User Tests*/
    User user = User();

    std::cout << "User Name: " << user.getUserName() << std::endl;
    std::cout << "Is Admin: " << (user.isAdmin() ? "Yes":"No") << std::endl;

    /*  OS Tests
    OS os = OS();
    std::string osName = os.getOSName();
    std::string osArch = os.getOSArchitecture();

    std::cout << osName << std::endl;
    std::cout << osArch << std::endl;
    */

    return (0);
}