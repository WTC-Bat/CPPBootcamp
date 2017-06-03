#include "CPU.hpp"

static int          ctl_get_int(int mib[])
{
    size_t  len;
    int     iOut;

    len = sizeof(iOut);
    sysctl(mib, 2, &iOut, &len, NULL, 0);

    return (iOut);
}

static std::string  ctl_get_str(int mib[])
{
    size_t      len;
    std::string sOut;
    char        *cstr;

    sysctl(mib, 2, NULL, &len, NULL, 0);
    cstr = (char *)malloc(len);
    sysctl(mib, 2, cstr, &len, NULL, 0);
    sOut = strdup(cstr);
    free(cstr);

    return (sOut);
}

CPU::CPU(void)
{
    int     mib[2];

    mib[0] = CTL_HW;
    
    this->_numberOfCores = sysconf(_SC_NPROCESSORS_ONLN);

    mib[1] = HW_MACHINE;
    this->_machineOpMode = ctl_get_str(mib);

    mib[1] = HW_MODEL;
    this->_model = ctl_get_str(mib);

    /*?
    **  1234    =   Little-Endian
    **  4321    =   Big-Endian
    */
    mib[1] = HW_BYTEORDER;
    this->_byteOrder = ctl_get_int(mib);

    //???
    // mib[1] = HW_PHYSMEM;    //Use HW_MEMSIZE instead?
    mib[1] = HW_MEMSIZE;
    this->_physicalMemory = ctl_get_int(mib);

    mib[1] = HW_USERMEM;
    this->_nonKernelMemory = ctl_get_int(mib);

    mib[1] = HW_PAGESIZE;
    this->_pageSize = ctl_get_int(mib);

    mib[1] = HW_FLOATINGPT;
    if ((this->_floatSize = ctl_get_int(mib)) > 0)
    {
        this->_supportsFloat = true;
    }
    else
    {
        this->_floatSize = 0;
        this->_supportsFloat = false;
    }

    mib[1] = HW_MACHINE_ARCH;
    this->_machineArchitecture = ctl_get_str(mib);
}

CPU::CPU(const CPU& cpu)
{
    *this = cpu;
}

CPU::~CPU(void)
{
    return ;
}

CPU         CPU::operator=(const CPU& cpu)
{
    this->_numberOfCores = cpu.getNumberOfCores();
    return (*this);
}

int         CPU::getNumberOfCores(void) const
{
    return (this->_numberOfCores);
}

std::string CPU::getMachineOpMode(void) const
{
    return (this->_machineOpMode);
}

std::string CPU::getModel(void) const
{
    return (this->_model);
}

int         CPU::getByteOrder(void) const
{
    return (this->_byteOrder);
}

int         CPU::getPhysicalMemory(void) const
{
    return (this->_physicalMemory);
}

int         CPU::getNonKernelMemory(void) const
{
    return (this->_nonKernelMemory);
}

int         CPU::getPageSize(void) const
{
    return (this->_pageSize);
}

bool        CPU::supportsFloat(void) const
{
    return (this->_supportsFloat);
}

int         CPU::getFloatSize(void) const
{
    return (this->_floatSize);
}

std::string CPU::getMachineArchitecture(void) const
{
    return (this->_machineArchitecture);
}