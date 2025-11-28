#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractional_bits = 8;
    public:
        /* Orthodox Canonical Form */
        Fixed(); //Constructor 
        Fixed(const Fixed &other); //copy Constructor
        Fixed& operator=(const Fixed& other); //copy assignment operator overload
        ~Fixed(); //destructor

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        /**************************/
        Fixed(const int val);
        Fixed(const float val);

        float toFloat( void ) const;
        int toInt( void ) const;
        /****************************/
        bool operator>(const Fixed&) const;
        bool operator<(const Fixed&) const;
        bool operator>=(const Fixed&) const;
        bool operator<=(const Fixed&) const;
        bool operator==(const Fixed&) const;
        bool operator!=(const Fixed&) const;
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        Fixed& operator++();//Pre ++X modifies object first, then returns it
        //Pre :change value → return *this
        Fixed& operator--();
        Fixed operator++(int); //Post X++ returns old value, then modifies object
        //Post:copy old value → change → return old
        Fixed operator--(int);
        
        static Fixed& min(Fixed& num1, Fixed& num2);
        static const Fixed& min(const Fixed& num1, const Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        static const Fixed& max(const Fixed& num1, const Fixed& num2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif