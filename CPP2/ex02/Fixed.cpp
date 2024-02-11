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
}

Fixed::Fixed(const Fixed &fixed) {
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
  this->_fixedPointValue = (int)roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed() { }

Fixed &Fixed::operator=(const Fixed &fixed) {
  if (this != &fixed)
    this->_fixedPointValue = fixed.getRawBits();
  return *this;
}

bool Fixed::operator>(const Fixed &fixed) const {
  return this->_fixedPointValue > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const {
  return this->_fixedPointValue < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
  return this->_fixedPointValue >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
  return this->_fixedPointValue <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {
  return this->_fixedPointValue == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const {
  return this->_fixedPointValue != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const {
  return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const {
  return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const {
  return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)const {
  return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++() {
  this->_fixedPointValue++;
  return *this;
}

Fixed Fixed::operator--() {
  this->_fixedPointValue--;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  operator++();
  return tmp;
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  operator--();
  return tmp;
}


std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
  out << fixed.toFloat();
  return out;
}

std::ostream &operator<<(std::ostream &out, Fixed &fixed) {
  out << fixed.toFloat();
  return out;
}

int Fixed::getRawBits(void) const {
  return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
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

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
  return (a < b ? a : b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
  return (a < b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
  return (a > b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a > b ? a : b);
}
