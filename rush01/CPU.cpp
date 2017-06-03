#include "CPU.hpp"

// static int          ctl_get_int(int mib[2])
// {
//     size_t  len;
//     int     iOut;

//     len = sizeof(iOut);
//     sysctl(mib, 2, &iOut, &len, NULL, 0);

//     return (iOut);
// }

// static std::string  ctl_get_str()
// {
//     size_t      len;
//     std::string sOut;
//     char        *cstr;

//     //set len?
//     sysctl(mib, 2, NULL, &len, NULL, 0);
//     cstr = (char *)malloc(len);
//     sysctl(mib, 2, cstr, &len, NULL, 0);
//     sOut = strdup(cstr);
//     free(cstr);

//     return (sOut);
// }

CPU::CPU(void)
{
    // gets the number of cores using <unistd.h> -> sysconf()
    // this->_numberOfCores = sysconf(_SC_NPROCESSORS_ONLN);

    int         mib[2];
    // int         iOut;
    std::string strOut;
    char        *str;
    size_t      len;

    mib[0] = CTL_HW;
    mib[1] = HW_MACHINE;
    sysctl(mib, 2, NULL, &len, NULL, 0);
    str = (char *)malloc(len);
    sysctl(mib, 2, str, &len, NULL, 0);
    std::cout << str << std::endl;

    // return ;
}

CPU::CPU(const CPU& cpu)
{
    *this = cpu;
}

CPU::~CPU(void)
{
    return ;
}

CPU     CPU::operator=(const CPU& cpu)
{
    this->_numberOfCores = cpu.getNumberOfCores();
}

int     CPU::getNumberOfCores(void) const
{
    return (this->_numberOfCores);
}