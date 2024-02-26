/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "FragTrap name constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &oldFragTrap) : ClapTrap(oldFragTrap) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    _hitPoints = oldFragTrap._hitPoints;
    _energyPoints = oldFragTrap._energyPoints;
    _attackDamage = oldFragTrap._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &oldFragTrap) {
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this != &oldFragTrap) {
        _name = oldFragTrap._name;
        _hitPoints = oldFragTrap._hitPoints;
        _energyPoints = oldFragTrap._energyPoints;
        _attackDamage = oldFragTrap._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " high fives everyone!" << std::endl;
}
