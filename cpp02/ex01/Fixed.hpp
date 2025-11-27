#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int fixed_point_number;
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
        Fixed(int const val);
        Fixed(float const val);

        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif