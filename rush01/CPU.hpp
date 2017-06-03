#ifndef CPU_HPP
# define CPU_HPP

# include <iostream>
# include <sys/types.h>
# include <sys/sysctl.h>
# include <unistd.h>

class CPU
{
    private:
        int         _numberOfCores;
        std::string _machineOpMode;
        std::string _model;
        int         _byteOrder;
        int         _physicalMemory;
        int         _nonKernelMemory;   //?
        int         _pageSize;
        bool        _supportsFloat;
        int         _floatSize;         //not sure if this is the size specified by sysctl
        std::string _machineArchitecture;
        

    public:
        /* Constructors */
        CPU(void);
        CPU(const CPU& cpu);

        /* Destructors */
        ~CPU(void);

        /* Operator Overloads */
        CPU     operator=(const CPU& cpu);

        /* Member Functions */
        int         getNumberOfCores(void) const;
        std::string getMachineOpMode(void) const;
        std::string getModel(void) const;
        int         getByteOrder(void) const;
        int         getPhysicalMemory(void) const;
        int         getNonKernelMemory(void) const;
        int         getPageSize(void) const;
        bool        supportsFloat(void) const;
        int         getFloatSize(void) const;
        std::string getMachineArchitecture(void) const;
};

#endif