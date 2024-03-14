/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &oldCat) : Animal(oldCat) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = oldCat;
}

Cat &Cat::operator=(const Cat &oldCat) {
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &oldCat) {
        this->_type = oldCat._type;
        this->_brain = new Brain(*oldCat._brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}

