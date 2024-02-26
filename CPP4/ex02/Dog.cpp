/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &oldDog) : Animal(oldDog){
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = oldDog;
}

Dog &Dog::operator=(const Dog &oldDog) {
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &oldDog) {
        this->_type = oldDog._type;
        *this->_brain = *oldDog._brain;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound() const {
    std::cout << "Muff" << std::endl;
}

