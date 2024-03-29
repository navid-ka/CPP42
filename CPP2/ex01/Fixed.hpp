/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#pragma once
#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(int const value);
    Fixed(float const value);
    ~Fixed();
    Fixed &operator=(const Fixed &fixed);
    int toInt(void) const;
    float toFloat(void) const;
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
    void setRawBits(int const raw);
    int getRawBits(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);