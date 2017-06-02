#include "OS.hpp"

// /* Constructors */
OS::OS(void)
{
    #ifdef _WIN32
    this->_osName = "Windows";
    this->_osArchitecture = "32bit";
    // this->_osVersion = 
    #elif _WIN64
    this->_osName = "Windows";
    this->_osArchitecture = "64bit";
    // this->_osVersion = 
    #elif defined(__unix) || defined(__unix__)
    this->_osName = "Unix";
    // this->_osArchitecture = 
    // this->_osVersion = 
    #elif __linux__
    this->_osName = "Linux"
    // this->_osArchitecture = 
    // this->_osVersion
    #elif defined(__APPLE__) && defined(__MACH__)
    this->_osName = "MacOS";
    // this->_osArchitecture = 
    // this->_osVersion = 
    #endif
}

OS::~OS(void)
{
    return ;
}

std::string OS::getOSName(void) const
{
    if (!this->_osName.empty())
    {
        return (this->_osName);
    }
    return (NULL);
}