#include "User.hpp"

/* Constructors */

User::User(void) : _userName(""), _isAdmin(false)
{
    
    return ;
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
    return (*this); //?
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