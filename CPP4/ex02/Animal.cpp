/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal() : _type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type) {
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &oldAnimal) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = oldAnimal;
}

Animal &Animal::operator=(const Animal &oldAnimal) {
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &oldAnimal) {
        this->_type = oldAnimal._type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return this->_type;
}

