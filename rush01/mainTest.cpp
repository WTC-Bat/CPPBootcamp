#include "OS.hpp"
#include "User.hpp"
#include "CPU.hpp"
// #include <iostream>

int     main(void)
{
    std::cout << std::endl;
    std::cout << "CPU Tests:" << std::endl;

    CPU cpu = CPU();
    std::cout << "Number of Cores: " << cpu.getNumberOfCores() << std::endl;
    std::cout << "OpMode: " << cpu.getMachineOpMode() << std::endl;
    std::cout << "Model: " << cpu.getModel() << std::endl;
    std::cout << "Byte Order: "
        << (cpu.getByteOrder() == 1234 ? "Little-Endian":"Big-Endian") 
        << std::endl;
    std::cout << "Physical Memory: " << cpu.getPhysicalMemory() << std::endl;
    std::cout << "Non-Kernel Memory: " << cpu.getNonKernelMemory() << std::endl;
    std::cout << "Page Size: " << cpu.getPageSize() << std::endl;
    std::cout << "Supports Float: " << (cpu.supportsFloat() ? "Yes": "No") << std::endl;
    std::cout << "Float Size: " << cpu.getFloatSize() << std::endl;
    std::cout << "Machine Architecture: " << cpu.getMachineArchitecture() << std::endl;

    std::cout << std::endl;
    std::cout << "OS Tests:" << std::endl;
    
    /*  OS Tests*/
    OS os = OS();
    std::string osName = os.getOSName();
    std::string osOpMode = os.getOSOpMode();

    std::cout << osName << std::endl;
    std::cout << osOpMode << std::endl;

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