#ifndef USER_HPP
# define USER_HPP

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <pwd.h>

/* Unix-Type systems only at the moment*/

class User
{
    private:
        /* Fields */
        std::string _userName;
        long        _userID;
        long        _groupID;
        std::string _initialWorkingDir;
        std::string _shellProgram;
        bool        _isAdmin;

        /* Private Functions */
        void        _initializeUser(void);
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
        long        getUserID(void) const;
        long        getGroupID(void) const;
        std::string getInitialWorkingDir(void) const;
        std::string getShellProgram(void) const;

        /* Exceptions */
};

#endif