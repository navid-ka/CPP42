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
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() { 
    for (int i = 0; i < SLOTS; i++) {
        _materia[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource &oldMateriaSource) { 
    for (int i = 0; i < 4; i++)
	{	
		if (oldMateriaSource._materia[i])
			_materia[i] = oldMateriaSource._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs) {
    for (int i = 0; i < 4; i++)
	{
		if (rhs._materia[i])
			_materia[i] = rhs._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
	return (*this);
}
MateriaSource::~MateriaSource() { 
    for (int i = 0; i < SLOTS; i++) {
		delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) { 
	if (!m) { 
		std::cerr << "Invalid materia.\n";
		return ; 
	}
    for (int i = 0; i < SLOTS; i++)
    {
        if (!_materia[i])
        {
            this->_materia[i] = m->clone();
            return ;
        }   
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) { 
    for (int i = 0; i < 4; i++)
	{
		if(_materia[i]->getType() == type)
			return (_materia[i]);
	}
	return (0);
}

void	MateriaSource::printMaterias(void)
{	
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
			std::cout << "Materia slot " << i << " is " << _materia[i]->getType() << " ." << std::endl;
		else
			std::cout << "Materia slot " << i <<  " is empty." << std::endl;
	}
}