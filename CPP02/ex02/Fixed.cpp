#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
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
}

Fixed::Fixed(int const val)
{
    this->value = val << fractional_bits; //shifting left by 8 = multiply by 256
}

Fixed::Fixed(float const val)
{
    this->value = roundf(val * (1 << fractional_bits)); //Multiplying by 256 moves the decimal part into the integer.
}

float Fixed::toFloat( void ) const
{
    return (float)this->value / (1 << fractional_bits); //or : (float)this->value / (1 << fractional_bits)
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

bool Fixed::operator>(const Fixed& other) const
{
    return ( this->toFloat() > other.toFloat() );
}

bool Fixed::operator<(const Fixed& other) const
{
    return ( this->toFloat() < other.toFloat() );
}

bool Fixed::operator>=(const Fixed& other) const
{
    return ( this->toFloat() >= other.toFloat() );
}

bool Fixed::operator<=(const Fixed& other) const
{
    return ( this->toFloat() <= other.toFloat() );
}

bool Fixed::operator==(const Fixed& other) const
{
    return ( this->toFloat() == other.toFloat() );
}

bool Fixed::operator!=(const Fixed& other) const
{
    return ( this->toFloat() != other.toFloat() );
}

Fixed Fixed::operator+(const Fixed& other)
{
    return Fixed( this->toFloat() + other.toFloat() );
}

Fixed Fixed::operator-(const Fixed& other)
{
    return Fixed( this->toFloat() - other.toFloat() );
}

Fixed Fixed::operator*(const Fixed& other)
{
    return Fixed( this->toFloat() * other.toFloat() );
}

Fixed Fixed::operator/(const Fixed& other)
{
    return Fixed( this->toFloat() / other.toFloat() );
}

Fixed& Fixed::operator++() //++x
{
    ++value;
    return (*this);
}

Fixed& Fixed::operator--() //--x
{
    --value;
    return (*this);
}

Fixed Fixed::operator++(int) //x++
{
    Fixed tmp;

    tmp = *this;
    ++value;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;

    tmp = *this;
    --value;
    return (tmp);
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
    if(num1.value < num2.value)
        return num1;
    else
        return num2;
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
    if(num1.value > num2.value)
        return num1;
    else
        return num2;
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if(num1.value < num2.value)
        return num1;
    else
        return num2;
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if(num1.value > num2.value)
        return num1;
    else
        return num2;
}
