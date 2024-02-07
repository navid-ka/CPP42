/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <string>

Fixed::Fixed() : _fixedPointValue(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}
/**
 * @brief Integer constructor for the Fixed class.
 *
 * This constructor takes an integer value and converts it to a fixed point
 * value. The conversion is done by shifting the integer value to the left by
 * the number of fractional bits. This effectively multiplies the integer value
 * by 2^_fractionalBits, converting it to a fixed point representation.
 *
 * @param value The integer value to be converted to a fixed point value.
 */
Fixed::Fixed(int const value) {
  std::cout << "Int constructor called" << std::endl;
  this->_fixedPointValue = value << this->_fractionalBits;
}

/**
 * @brief Floating point constructor for the Fixed class.
 *
 * This constructor takes a floating point value and converts it to a fixed
 * point value. The conversion is done by first multiplying the float value by
 * 2^_fractionalBits, then rounding to the nearest integer. This effectively
 * converts the floating point value to a fixed point representation.
 *
 * @param value The floating point value to be converted to a fixed point value.
 */
Fixed::Fixed(float const value) {
  std::cout << "Float constructor called" << std::endl;
  this->_fixedPointValue = (int)roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Assignation operator called" << std::endl;
  if (this != &fixed)
    this->_fixedPointValue = fixed.getRawBits();
  return *this;
}

Fixed &Fixed::operator>(const Fixed &fixed) {
  return this->_fixedPointValue > fixed.getRawBits() ? *this : fixed;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
  out << fixed.toFloat();
  return out;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->_fixedPointValue = raw;
}

/**
 * @brief Converts the fixed point value to an integer.
 *
 * This function takes the fixed point value and converts it to an integer.
 * The conversion is done by shifting the fixed point value to the right by the
 * number of fractional bits. This effectively divides the fixed point value by
 * 2^_fractionalBits, converting it to an integer.
 *
 * @return The converted integer value.
 */
int Fixed::toInt(void) const {
  return this->_fixedPointValue >> this->_fractionalBits;
}

/**
 * @brief Converts the fixed point value to a floating point value.
 *
 * This function takes the fixed point value and converts it to a floating point
 * value. The conversion is done by dividing the fixed point value by
 * 2^_fractionalBits. This effectively converts the fixed point value to a
 * floating point representation.
 *
 * @return The converted floating point value.
 */
float Fixed::toFloat(void) const {
  return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}
