#ifndef OS_HPP
# define OS_HPP

# include <iostream>

// # include <sys/utsname.h>

class OS
{
    private:
        std::string _osName;
        std::string _osArchitecture;
        std::string _osVersion;

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
};

#endif