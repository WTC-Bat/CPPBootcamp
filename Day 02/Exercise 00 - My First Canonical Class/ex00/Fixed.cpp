#include "Fixed.hpp"

/* Constructors */

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;

    Fixed::_pointValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = fixed;
}

/* Operator Overloads */
Fixed&  Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;

    this->_pointValue = fixed.getRawBits();

    return (*this);
}

/* Destructors */

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;

    return ;
}

/* Member Functions */

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->_pointValue);
}

void    Fixed::setRawBits(const int raw)
{
    //???
    std::cout << "setRawBits member fuction called" << std::endl;

    this->_pointValue = raw;
}