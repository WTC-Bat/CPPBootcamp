#include "User.hpp"

/* Constructors */

User::User(void) : _userName(""), _isAdmin(false)
{
    this->_setUserName();
    this->_setIsAdmin();
    // return ;
}

User::User(const User& user)
{
    *this = user;
}

/* Destructors */

User::~User(void)
{
    return ;
}

/* Operator Overloads */

User    User::operator=(const User& user)
{
    this->_userName = user.getUserName();
    // this->_isAdmin = user.isAdmin();
    return (*this); //?
}

/* Private Functions */

void        User::_setUserName(void)
{
    this->_userName = std::getenv("USER");
}

void        User::_setIsAdmin(void)
{
    #if defined(__linux__) || \
        defined(__unix) || \
        defined(__unix__) || \
        defined(__APPLE__) || \
        defined(__MACH__)
        
        struct passwd   *pwd;
        std::string     root;
        pwd = getpwuid(0);
        root = strdup(pwd->pw_name);
        if (root == "root")
            this->_isAdmin = true;
        
    #elif defined(_WIN32)
        //Do windows work
        this->_isAdmin = false;
    #endif
}

/* Member Functions */

std::string User::getUserName(void) const
{
    return (this->_userName);
}

bool        User::isAdmin(void) const
{
    return (this->_isAdmin);
}