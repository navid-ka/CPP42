/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->_type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) {
    this->_type = type;
    std::cout << "WrongAnimal type constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &oldWrongAnimal) {
    this->_type = oldWrongAnimal._type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &oldWrongAnimal) {
    if (this != &oldWrongAnimal) {
        this->_type = oldWrongAnimal._type;
    }
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}
