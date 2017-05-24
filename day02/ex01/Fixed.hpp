#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    /* Fields */
    int                 _pointValue;
    static const int    _fractionalBits = 8;

public:
    /* Constructors */
    Fixed(void);
    Fixed(const Fixed &fixedClass);
    Fixed(const int ivalue);
    Fixed(const float fvalue);

    /* Operator Overloads */
    Fixed& operator=(const Fixed& fixed);

    /* Destructors */
    ~Fixed(void);

    /* Member Functions */
    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
    float               toFloat(void) const;
    int                 toInt(void) const;
};

/* Non-Members */
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif