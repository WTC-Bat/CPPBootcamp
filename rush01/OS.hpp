#ifndef OS_HPP
# define OS_HPP

# include <iostream>

#if defined(__APPLE__) || defined(__MACH__)
    #include <Foundation.h>
#endif


// # include <sys/utsname.h>

static class OS
{
    private:
        std::string _osName;
        std::string _osArchitecture;
        std::string _osVersion;

        std::string _getMacOSVersion(void)
        {
            NSInteger   nsInt;
        }

    public:
        /* Contructors */
        OS(void);
        OS(const OS& os)

        /* Operator Overloads */
        OS   operator=(const OS& os);

        /* Destructors */
        ~OS(void);

        /* Member Functions */
        std::string getOSName(void) const;
};

#endif