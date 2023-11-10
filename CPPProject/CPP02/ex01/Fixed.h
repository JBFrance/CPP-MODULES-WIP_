//
// Created by Joshua Franceschi on 11/2/23.
//

#ifndef CPPPROJECT_FIXED_H
#define CPPPROJECT_FIXED_H
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 _fixed;
    static const int    _fBits = 8;
public:
    Fixed(); //Copy Constructor
    Fixed(const Fixed& fixed); //Copy Constructor
    ~Fixed(); //Destructor
    Fixed& operator=(const Fixed& fixed);
    Fixed(const int int_n);
    Fixed(const float float_n);
    void setRawBits(int const raw);
    int getRawBits(void) const;
    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& src);

#endif //CPPPROJECT_FIXED_H
