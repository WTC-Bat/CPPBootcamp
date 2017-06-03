#include "CPU.hpp"

CPU::CPU(void)
{
    this->_numberOfCores = sysconf(_SC_NPROCESSORS_ONLN);
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