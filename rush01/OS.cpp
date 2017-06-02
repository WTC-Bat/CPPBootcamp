#include "OS.hpp"

/* Constructors */
OS::OS(void)
{
    // this->_setOSName();
    // this->_setOSArchitecture();
    this->_setOSNameAndArchitecure();
    // this->_setOSVersion()
}

/* Destructors */

OS::~OS(void)
{
    return ;
}

/* Private Functions */

// void    OS::_setOSName(void)
// {
//     #if defined(_WIN32) || defined(_WIN64)
//         this->_osName = "Windows";
//     #elif defined(__unix) || defined(__unix__)
//         this->_osName = "Unix";
//     #elif __linux__
//         this->_osName = "Linux"
//     #elif defined(__APPLE__) || defined(__MACH__)
//         this->_osName = "MacOS";
//     #endif
// }

void    OS::_setOSNameAndArchitecure(void)
{
    #ifdef _WIN32
        this->_osName = "Windows";
        this->_osArchitecture = "32/64bit";
        #ifdef _WIN64
            this->_osArchitecture = "64bit";
        #else
            this->_osArchitecture - "32bit"; 
        #endif
    #elif defined(__APPLE__) || defined(__MACH__)
        this->_osName = "MacOS";
        this->_osArchitecture = "64bit";    //? version could tell us more
    #elif __linux__
        this->_osName = "Linux";
    #elif defined(__unix) || defined(__unix__)
        this->_osName = "Unix";    
    #endif
}

/* Member Functions */

std::string OS::getOSName(void) const
{
    if (!this->_osName.empty())
    {
        return (this->_osName);
    }
    return (NULL);
}