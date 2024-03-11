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
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"


Character::Character(const std::string name) : _name(name) {
	for (int i = 0; i < SLOTS; i++) {
		_inventory[i] = NULL;
	}
	for (int i = 0; i < COLLECTOR; i++) {
		_garbage[i] = NULL;
	}
}

Character::Character(const Character &oldCharacter) { 
	*this = oldCharacter;
}

Character& Character::operator=(const Character &rhs) { 
	this->_name = rhs.getName();
	return *this;
}

Character::~Character() {
	for (int i = 0; i < SLOTS; i++) {
		delete _inventory[i];
	}
	for (int i = 0; i < COLLECTOR; i++) {
		delete _garbage[i];
	}
}


std::string const & Character::getName() const { return (_name); }

void Character::equip(AMateria* m) {
	for (int i = 0; i < SLOTS; i++)
	{	
		if (!this->_inventory[i]) {
			this->_inventory[i] = m->clone();
			std::cout << m->getType() << " equiped in " << i << " slot." << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full" << std::endl;
}
void Character::unequip(int idx) {
	for (int i = 0; i < COLLECTOR; i++)
	{	
		if (!this->_garbage[i]) {
			this->_garbage[i] = this->_inventory[idx];
			break ;
		}
	}
	this->_inventory[idx] = NULL;

}
void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx])
	{
		if (idx >= 0 && idx < 4 && _inventory[idx])
			_inventory[idx]->use(target);
	}
	else
		std::cout << "there's no materia in slot " << idx << " to target " << target.getName() << " with!" << std::endl;
}

