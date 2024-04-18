#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0) {}

Fixed::Fixed(const Fixed& r)
{
    *this = r;
}

Fixed::Fixed(const int integer)
{
    this->fixed_point = integer << fractionalBits;
}

Fixed::Fixed(const float floating)
{
    this->fixed_point = roundf(floating * (1 << fractionalBits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed_point / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->fixed_point >> fractionalBits);
}

Fixed &Fixed::operator=(const Fixed& other)
{
    this->fixed_point = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{
    return this->fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& number)
{
    os << number.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed &r) const
{
    return (this->fixed_point > r.getRawBits());
}

bool Fixed::operator<(const Fixed &r) const
{
    return (this->fixed_point < r.getRawBits());
}

bool Fixed::operator>=(const Fixed &r) const
{
    return (this->fixed_point >= r.getRawBits());
}

bool Fixed::operator<=(const Fixed &r) const
{
    return (this->fixed_point <= r.getRawBits());
}

bool Fixed::operator==(const Fixed &r) const
{
    return (this->fixed_point == r.getRawBits());
}

bool Fixed::operator!=(const Fixed &r) const
{
    return (this->fixed_point != r.getRawBits());
}

Fixed Fixed::operator+(const Fixed &r)
{
    Fixed result;
    result.setRawBits(this->fixed_point + r.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &r)
{
    Fixed result;
    result.setRawBits(this->fixed_point - r.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &r)
{
    Fixed result;
    result.setRawBits((this->fixed_point * r.getRawBits()) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &r)
{
    Fixed result;
    result.setRawBits((this->fixed_point << fractionalBits) / r.getRawBits());
    return result;
}

Fixed& Fixed::operator++()
{
    this->fixed_point++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->fixed_point++;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->fixed_point--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->fixed_point--;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return a;
    return b;
}