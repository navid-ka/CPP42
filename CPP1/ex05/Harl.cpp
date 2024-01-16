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
    void (Harl::*f[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    if (level == "DEBUG") {
        (this->*f[0])();
    } else if (level == "INFO") {
        (this->*f[1])();
    } else if (level == "WARNING") {
        (this->*f[2])();
    } else if (level == "ERROR") {
        (this->*f[3])();
    } else {
        std::cout << "Unless you obey my instructions, I shall be forced to disconnect you." << std::endl;
    }
}
