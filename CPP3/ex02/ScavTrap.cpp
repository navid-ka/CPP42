/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &oldScavTrap) : ClapTrap(oldScavTrap) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    _hitPoints = oldScavTrap._hitPoints;
    _energyPoints = oldScavTrap._energyPoints;
    _attackDamage = oldScavTrap._attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &oldScavTrap) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &oldScavTrap) {
        _name = oldScavTrap._name;
        _hitPoints = oldScavTrap._hitPoints;
        _energyPoints = oldScavTrap._energyPoints;
        _attackDamage = oldScavTrap._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name 
                  << " is dead and cannot attack." << std::endl;
    } else if (this->_energyPoints <= 0) {
        std::cout << "ScavTrap " << _name 
                  << " is out of energy and cannot attack." << std::endl;
    } else {
        std::cout << "ScavTrap " << _name 
                  << " attacks " << target 
                  << " causing " << _attackDamage 
                  << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode" << std::endl;
}