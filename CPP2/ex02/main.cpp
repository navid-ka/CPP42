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
#include <iostream>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

/*
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "max( a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << "min( a, b ): " << Fixed::min( a, b ) << std::endl;

	c = 120;
	a = 60;
    b = 50;
	std::cout << "a + b = " << a+b << std::endl;
	std::cout << "b + c = " << b+c << std::endl;
	std::cout << "c / b = " << c/b << std::endl;
	std::cout << "c / a = " << c/a << std::endl;
	std::cout << "a * b = " << a*b << std::endl;
    std::cout << "a - b = " << a-b << std::endl;
    std::cout << "a - c = " << a-c << std::endl;

	std::cout << "a > b: " << ( a > b ) << std::endl;
	std::cout << "a >= b: " << ( a >= b ) << std::endl;
	std::cout << "a < b: " << ( a < b ) << std::endl;
	std::cout << "a <= b: " << ( a <= b ) << std::endl;
	std::cout << "c > d: " << ( c > d ) << std::endl;
	std::cout << "c >= d: " << ( c >= d ) << std::endl;
	std::cout << "c < d: " << ( c < d ) << std::endl;
	std::cout << "c <= d: " << ( c <= d ) << std::endl;
	std::cout << "c == d: " << ( c == d ) << std::endl;
	std::cout << "c != d: " << ( c != d ) << std::endl;
*/
	return 0;
}