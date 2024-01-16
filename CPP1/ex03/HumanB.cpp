/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(){
    if (_weapon)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else 
        std::cout << this->_name << " attacks with bare fists!" << std::endl;
}   
