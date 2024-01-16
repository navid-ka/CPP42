/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(){}
Zombie::~Zombie(){
    std::cout << this->getName() << ":" << " Diiiiieeeeeeeeeedd..." << std::endl;
}

void Zombie::announce(void) {
  std::cout << this->getName() << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void) {
  return this->_name;
}

void Zombie::setName(std::string name) {
  this->_name = name;
}