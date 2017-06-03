#include "OS.hpp"
#include "User.hpp"
// #include <iostream>

int     main(void)
{
    std::cout << std::endl;
    std::cout << "OS Tests:" << std::endl;
    
    /*  OS Tests*/
    OS os = OS();
    std::string osName = os.getOSName();
    std::string osArch = os.getOSArchitecture();

    std::cout << osName << std::endl;
    std::cout << osArch << std::endl;

    std::cout << std::endl;
    std::cout << "User Tests:" << std::endl;

    /*  User Tests*/
    User user = User();

    std::cout << "User Name: " << user.getUserName() << std::endl;
    std::cout << "Is Admin: " << (user.isAdmin() ? "Yes":"No") << std::endl;
    std::cout << "User ID: " << user.getUserID() << std::endl;
    std::cout << "Group ID: " << user.getGroupID() << std::endl;
    std::cout << "Initial Working Dir: " << user.getInitialWorkingDir() << std::endl;
    std::cout << "Shell Program: " << user.getShellProgram() << std::endl;

    std::cout << std::endl;

    return (0);
}