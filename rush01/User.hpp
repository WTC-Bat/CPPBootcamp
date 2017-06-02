#ifndef USER_HPP
# define USER_HPP

#include <iostream>

class User
{
    private:
        std::string _userName;
        bool        _isAdmin;

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