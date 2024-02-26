/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : 
    _name("Unknown Meow"), 
    _hitPoints(10), 
    _energyPoints(10), 
    _attackDamage(0) {
    std::cout << "ClapTrap: " << _name << " start bootup sequence." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : 
    _name(name), 
    _hitPoints(10), 
    _energyPoints(10), 
    _attackDamage(0) {
    if (name.empty())
        this->_name = "Meowzilla";
    std::cout << "ClapTrap: " << _name << " start bootup sequence." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldClapTrap) {
    *this = oldClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap: " << _name << " Are you god? Am I dead?" << std::endl;
}

void ClapTrap::attack(const std::string &target) {

    if (this->_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " is dead and cannot attack." << std::endl;
    } else if (this->_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " is out of energy and cannot attack." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name 
                  << " attacks " << target 
                  << " causing " << _attackDamage 
                  << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " is already dead and cannot take damage." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name 
                  << " takes " << amount 
                  << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " is dead and cannot be repaired." << std::endl;
    } else if (this->_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name 
                  << " is out of energy and cannot be repaired." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name 
                  << " is repaired for " << amount 
                  << " points of health!" << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints -= 1;
    }
}