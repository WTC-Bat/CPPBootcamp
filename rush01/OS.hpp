#ifndef OS_HPP
# define OS_HPP

# include <iostream>
# include <cmath>

#if defined(__linux) || defined(__linux__) // posix and unix too?
    #include <sys/utsname.h>
// #elif defined(__APPLE__) || defined(__MACH__)
    
#endif 

class OS
{
    private:
        /* Fields */
        std::string _osName;    //osType?
        std::string _osOpMode;
        std::string _osVersion;

        /* Private Functions */
        // void    _setOSName(void);
        // void    _setOSArchitecture(void);
        void    _setOSNameAndArchitecure(void);
        // void    _setMacVersionNumber(void);
        // void    _setOSVersion(void);

    public:
        /* Contructors */
        OS(void);
        OS(const OS& os);

        /* Operator Overloads */
        OS   operator=(const OS& os);

        /* Destructors */
        ~OS(void);

        /* Member Functions */
        std::string getOSName(void) const;
        std::string getOSOpMode(void) const;
        std::string getOSVersion(void) const;
};

#endif