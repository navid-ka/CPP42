/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#include <iostream>

int main()
{	

	{
	AMateria *a = new Ice();
	std::cout << a->getType() << std::endl;
	delete a;
	a = new Cure();
	std::cout << a->getType() << std::endl;
	delete a;
	std::cout << "--------------------------------" << std::endl;
	}

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		std::cout << "------print materias src----- " << std::endl;
		src->printMaterias();

		IMateriaSource *src_copy = new MateriaSource(*dynamic_cast<MateriaSource*>(src));;
		std::cout << "------print materias src copy----- " << std::endl;
		src_copy->printMaterias();

		src->learnMateria(new Ice());
		src_copy->learnMateria(new Cure());

		std::cout << "------print materias src - deep copy check----- " << std::endl;
		src->printMaterias();

		std::cout << "------print materias srccopy - deep copy check----- " << std::endl;
		src_copy->printMaterias();

		delete src;
		delete src_copy;
	}

	{
		std::cout << "--------------------------------" << std::endl;
		ICharacter *me = new Character("me");
		AMateria *ice = new Ice();
		AMateria *cure = new Cure();
		me->equip(ice);
		me->equip(cure);
		std::cout << "------------original inventory--------------------" << std::endl;
		me->printInventory();

		ICharacter *me_copy = new Character(*dynamic_cast<Character*>(me));
		me->unequip(0);

		std::cout << "------------original inventory--------------------" << std::endl;
		me->printInventory();

		std::cout << "------------copy inventory--------------------" << std::endl;
		me_copy->printInventory();

		delete me;
		delete me_copy;
		delete ice;
		delete cure;
		
	}
	
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->unequip(1);
	me->use(0, *bob);
	me->unequip(0);

	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	me->equip(tmp);

	delete bob;
	delete me; 
	delete src;
	}
	return 0;
}