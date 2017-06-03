#ifndef CPU_HPP
# define CPU_HPP

# include <iostream>
# include <sys/types.h>
# include <sys/sysctl.h>

# include <unistd.h>    //alternate means for getting number of cores

class CPU
{
    private:
        int     _numberOfCores;

    public:
        /* Constructors */
        CPU(void);
        CPU(const CPU& cpu);

        /* Destructors */
        ~CPU(void);

        /* Operator Overloads */
        CPU     operator=(const CPU& cpu);

        /* Member Functions */
        int     getNumberOfCores(void) const;
};

#endif