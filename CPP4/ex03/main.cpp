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

int main( void )
{
    IMateriaSource* creadorMaterial = new MateriaSource();
    AMateria* gel = new Ice();
    AMateria* cura = new Cure();
    std::cout << std::endl;
    creadorMaterial->learnMateria(gel);
    creadorMaterial->learnMateria(gel);
    creadorMaterial->learnMateria(cura);
    creadorMaterial->learnMateria(cura);
    std::cout << std::endl;
    Character* uri = new Character("Uri");
    std::cout << std::endl;
    uri->equip(creadorMaterial->createMateria("ice"));
    uri->equip(creadorMaterial->createMateria("cure"));
    uri->equip(creadorMaterial->createMateria("cure"));
    uri->equip(creadorMaterial->createMateria("ice"));
    std::cout << std::endl;
    AMateria* gel2 = new Ice();
    uri->equip(gel2); //The Uri inventory is full
    delete gel2;
    std::cout << std::endl;
    Character* target = new Character("target");
    std::cout << std::endl;
    uri->use(0, *target);
    uri->use(2, *target);
    std::cout << std::endl;
    uri->unequip(3);
    uri->unequip(2);
    std::cout << std::endl;
    uri->use(2, *target); //No Materia to use :(
    std::cout << std::endl;
	creadorMaterial->printMaterias();
    delete gel;
    delete cura;
    delete creadorMaterial;
    delete uri;
    delete target;
	return (0);
	}