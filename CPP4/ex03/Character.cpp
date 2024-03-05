/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include <iostream>
#include <string>
#include "Character.hpp"

Character::Character(const std::string name) : name(_name) {}

Character::Character(const Character &oldCharacter) { *this = &oldCharacter; }

Character& Character::operator=(const Character &rhs) { 
    _name = rhs.getName();
    return *this;
}

Character::~Character() {}


std::string const &Character::getName() const { return (_name); }

