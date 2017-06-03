#include "OS.hpp"

/* Constructors */
OS::OS(void)
{
    // this->_setOSName();
    // this->_setOSArchitecture();
    this->_setOSNameAndArchitecure();
    // this->_setOSVersion()
}

OS::OS(const OS& os)
{
    *this = os;    
}

/* Destructors */

OS::~OS(void)
{
    return ;
}

OS      OS::operator=(const OS& os)
{
    this->_osName = os.getOSName();
    this->_osOpMode = os.getOSOpMode();
    this->_osVersion = os.getOSVersion();
    return (*this);
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
    this->_osOpMode = "Unknown";  //tmp
    #ifdef _WIN32
        this->_osName = "Windows";
        this->_osOpMode = "32/64bit";
        #ifdef _WIN64
            this->_osOpMode = "64bit";
        #else
            this->_osOpMode - "32bit"; 
        #endif
    #elif defined(__APPLE__) || defined(__MACH__)
        this->_osName = "MacOS";
        this->_osOpMode = "64bit";    //? version could tell us more
    #elif __linux__
        this->_osName = "Linux";
    #elif defined(__unix) || defined(__unix__)
        this->_osName = "Unix";    
    #endif
}

// void    OS::_setMacVersionNumber(void)
// {
    
// }

/* Member Functions */

std::string OS::getOSName(void) const
{
    if (!this->_osName.empty())
    {
        return (this->_osName);
    }
    return (NULL);
}

std::string OS::getOSOpMode(void) const
{
    if (!this->_osOpMode.empty())
    {
        return (this->_osOpMode);
    }
    return (NULL);
}

std::string OS::getOSVersion(void) const
{
    if (!this->_osVersion.empty())
    {
        return (this->_osVersion);
    }
    return (NULL);
}