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

Fixed::Fixed(const int ivalue)
{
    std::cout << "Int constructor called" << std::endl;

    this->_pointValue = (ivalue << this->_fractionalBits);
}

Fixed::Fixed(const float fvalue)
{
    std::cout << "Float constructor called" << std::endl;

    this->_pointValue = roundf(fvalue * 256.0);
}

/* Destructors */

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

/* Operator Overloads */

Fixed&          Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;

    this->_pointValue = fixed.getRawBits();

    return (*this);
}

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();

    return (out);
}

/* Member Functions */

int             Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->_pointValue);
}

void            Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member fuction called" << std::endl;

    this->_pointValue = raw;
}

float           Fixed::toFloat(void) const
{
    return (this->_pointValue / 256.0);
}

int             Fixed::toInt(void) const
{
    return (this->_pointValue / 256);
}