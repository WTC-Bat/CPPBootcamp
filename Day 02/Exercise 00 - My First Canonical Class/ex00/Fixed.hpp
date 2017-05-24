#ifndef FIXED_H
 #define FIXED_H

class Fixed
{
private:
    int                 _pointValue;
    static const int    _fractionalBits;

public:
    /* Constructors */
    Fixed(void);
    Fixed(const Fixed &fixedClass);

    /* Destructors */
    ~Fixed(void);

    /* Member Functions */
    int                 getRawBits(void);
    void                setRawBits(int const raw);
};

#endif