/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Harl.hpp"
#include <iostream>

#define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming fo years whereas you started working here since last month."
#define ERROR "This is unacceptable! I want to speak to the manager now."

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug( void ){
    std::cout << DEBUG << std::endl;
}
void Harl::info( void ) {
    std::cout << INFO << std::endl;
}
void Harl::warning( void ){
    std::cout << WARNING << std::endl;
}
void Harl::error( void ){
    std::cout << ERROR << std::endl;
}

void Harl::complain(std::string level) {
	std::string lookup[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
    void (Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (lookup[i] == level)
		{
			(this->*f[i])();
			return ;
		}
	}
	return ;
}
