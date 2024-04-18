#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& r)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = r;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point = integer << fractionalBits;
}

Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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