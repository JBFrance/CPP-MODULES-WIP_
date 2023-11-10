//
// Created by Joshua Franceschi on 11/2/23.
//

#include "Fixed.h"

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

int Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
    return _fixedPointValue;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    _fixedPointValue = fixed.getRawBits();
    return *this;
}

int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits;
}

int Fixed::toFloat(void) const {
    return _fixedPointValue << _fractionalBits;
}