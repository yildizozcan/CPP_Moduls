#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed& r);
        Fixed &operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif