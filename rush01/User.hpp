#ifndef USER_HPP
# define USER_HPP

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <pwd.h>
// #include <sys/types.h>

class User
{
    private:
        std::string _userName;        
        bool        _isAdmin;

        /*  These fields can be obtained from "getpwuid()"
        long        _userID;
        long        _groupID;           
        std::string _initialWorkingDir;
        std::string _shellProgram;
        */

        void        _setUserName(void);
        void        _setIsAdmin(void);

    public:
        /* Constructors */
        User(void);
        User(const User& user);

        /* Destructors */
        ~User(void);

        /* Operator Overloads */
        User        operator=(const User& user);

        /* Member Functions */

        /* Getters */
        std::string getUserName(void) const;
        bool        isAdmin(void) const;
};

#endif