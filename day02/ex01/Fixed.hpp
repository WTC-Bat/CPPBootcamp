#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    /* Fields */
    int                 _pointValue;
    static const int    _fractionalBits;

public:
    /* Constructors */
    Fixed(void);
    Fixed(const Fixed &fixedClass);

    /* Operator Overloads */
    Fixed& operator=(const Fixed& fixed);

    /* Destructors */
    ~Fixed(void);

    /* Member Functions */
    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
};

#endif