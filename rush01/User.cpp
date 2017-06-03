#include "User.hpp"

/* Constructors */

User::User(void) : _userName(""), _isAdmin(false)
{
    this->_initializeUser();
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
    this->_isAdmin = user.isAdmin();
    this->_userID = user.getUserID();
    this->_groupID = user.getGroupID();
    this->_initialWorkingDir = user.getInitialWorkingDir();
    this->_shellProgram = user.getShellProgram();
    return (*this); //?
}

/* Private Functions */

void        User::_initializeUser(void)
{
    struct passwd   *pwd;

    pwd = getpwuid(0);
    this->_userName = std::getenv("USER");
    this->_userID = pwd->pw_uid;
    this->_groupID = pwd->pw_gid;
    this->_initialWorkingDir = strdup(pwd->pw_dir);
    this->_shellProgram = strdup(pwd->pw_shell);

    //this could probably just be placed here instead of it's own function
    this->_setIsAdmin();
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

long        User::getUserID(void) const
{
    return (this->_userID);
}

long        User::getGroupID(void) const
{
    return (this->_groupID);
}

std::string User::getInitialWorkingDir(void) const
{
    return (this->_initialWorkingDir);
}

std::string User::getShellProgram(void) const
{
    return (this->_shellProgram);
}