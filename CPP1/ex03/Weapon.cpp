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
#include <string>

Weapon::Weapon(std::string type){
    Weapon::setType(type);
}
Weapon::~Weapon(){}

void Weapon::setType(const std::string &type){
    this->_type = type;
}

const std::string& Weapon::getType(void) {
    return (this->_type);
}