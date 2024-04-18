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
        Fixed(const int integer);
        Fixed(const float floating);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);

        bool operator>(const Fixed &r) const;
        bool operator<(const Fixed &r) const;
        bool operator>=(const Fixed &r) const;
        bool operator<=(const Fixed &r) const;
        bool operator==(const Fixed &r) const;
        bool operator!=(const Fixed &r) const;

        Fixed operator+(const Fixed &r);
        Fixed operator-(const Fixed &r);
        Fixed operator*(const Fixed &r);
        Fixed operator/(const Fixed &r);

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
        
};

std::ostream& operator<<(std::ostream& os, const Fixed& number);

#endif
