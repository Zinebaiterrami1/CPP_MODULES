#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return ( this->value );
}

void Fixed::setRawBits( int const raw )
{
    value = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = val << fractional_bits; //shifting left by 8 = multiply by 256
}

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(val * (1 << fractional_bits)); //Multiplying by 256 moves the decimal part into the integer.
}

float Fixed::toFloat( void ) const
{
    return (float)this->value / ( 1 << fractional_bits ); //or : (float)this->value / (1 << fractional_bits)
}

int Fixed::toInt( void ) const
{
    return this->value >> fractional_bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}

