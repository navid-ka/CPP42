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

Character::Character() : _name("No Named") {
	for (int i = 0; i < SLOTS; i++) {
		_inventory[i] = NULL;
	}
	for (int i = 0; i < COLLECTOR; i++) {
		_garbage[i] = NULL;
	}
}

Character::Character(const std::string name) : _name(name) {
	for (int i = 0; i < SLOTS; i++) {
		_inventory[i] = NULL;
	}
	for (int i = 0; i < COLLECTOR; i++) {
		_garbage[i] = NULL;
	}
}

Character::Character(const Character &oldCharacter) { 
	_name = oldCharacter.getName();
	for (int i = 0; i < SLOTS; i++) {
		_inventory[i] = NULL;
		if (oldCharacter._inventory[i] != NULL)
			_inventory[i] = oldCharacter._inventory[i]->clone();
	}
	for (int i = 0; i < COLLECTOR; i++) {
		_garbage[i] = NULL;
		if (oldCharacter._garbage[i] != NULL)
			_garbage[i] = oldCharacter._garbage[i]->clone();
	}
}

Character& Character::operator=(const Character &rhs) { 
	this->_name = rhs.getName();
	for (int i = 0; i < SLOTS; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
		}
		this->_inventory[i] = NULL;
		if (rhs._inventory[i] != NULL) {
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	for (int i = 0; i < COLLECTOR; i++) {
		if (this->_garbage[i] != NULL) {
			delete this->_garbage[i];
		}
		this->_garbage[i] = NULL;
		if (rhs._garbage[i] != NULL) {
			this->_garbage[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < SLOTS; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < COLLECTOR; i++) {
		if (_garbage[i]) {
			delete _garbage[i];
			_garbage[i] = NULL;
		}
	}
}

std::string const & Character::getName() const { return (_name); }

void Character::equip(AMateria* m) {
	if (!m) { 
		std::cerr << "Invalid materia.\n";
		return ; 
	}
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
	if (idx >= 0 && idx < 4)
	{	
		if (_inventory[idx])
		{
			for (int i = 0; i < 100; i++)
			{
				if (!_garbage[i])
					_garbage[i] = _inventory[idx]->clone();
			}
			delete _inventory[idx];
			_inventory[idx] = NULL;
			std::cout << "materia in slot " << idx << " was unequipped." << std::endl;
		}
		else
		{
			std::cout << "slot " << idx << " is already empty!" << std::endl;
		}
	}
	else
	{
		std::cout << "unequip was not possible. wrong inventory slot provided." << std::endl;
	}
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

  void Character::printInventory(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			std::cout << "Inventory slot " << i << " is " << _inventory[i]->getType() << "." << std::endl;
		else
			std::cout << "Inventory slot " << i <<  " is empty." << std::endl;
	}
}