//
// Created by Joshua Franceschi on 11/2/23.
//

#ifndef CPPPROJECT_FIXED_H
#define CPPPROJECT_FIXED_H
#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
public:
    Fixed(); //Copy Constructor
    Fixed(const Fixed& fixed); //Copy Constructor
    ~Fixed(); //Destructor
    Fixed& operator=(const Fixed& fixed);
    int getRawBits(void) const;
    int setRawBits(const int raw);
};


#endif //CPPPROJECT_FIXED_H
