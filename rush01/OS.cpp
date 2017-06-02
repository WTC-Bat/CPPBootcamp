// // #include "OS.hpp"
// #include <sys/utsname.h>

// /* Constructors */
// OS::OS(void)
// {
//     struct utsname* uts;

//     uname(uts);

//     return (0);

//     // #ifdef _WIN32
//     // this->_osName = "Windows";
//     // this->_osArchitecture = "32bit";
//     // // this->_osVersion = 
//     // #elif _WIN64
//     // this->_osName = "Windows";
//     // this->_osArchitecture = "64bit";
//     // // this->_osVersion = 
//     // #elif defined(__unix) || defined(__unix__)
//     // this->_osName = "Unix";
//     // // this->_osArchitecture = 
//     // // this->_osVersion = 
//     // #elif __linux__
//     // this->_osName = "Linux"
//     // // this->_osArchitecture = 
//     // // this->_osVersion
//     // #elif defined(__APPLE__) || defined(__MACH__)
//     // this->_osName = "MacOS";
//     // // this->_osArchitecture = 
//     // // this->_osVersion = 
//#endif
// }

// // OS::getOSName(void)
// // {
// //     // if (!this->_osName.empty())
// //     // {
// //     //     return (this->_osName);
// //     // }
// // }