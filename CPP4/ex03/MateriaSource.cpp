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

MateriaSource::MateriaSource(const MateriaSource &oldMateriaSource) { *this = oldMateriaSource; }

MateriaSource& MateriaSource::operator=(const MateriaSource __attribute__((unused))&rhs) {
    return *this;
}
MateriaSource::~MateriaSource() { 
    for (int i = 0; i < SLOTS; i++) {
		delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* m) { 
    for (int i = 0; i < SLOTS; i++)
    {
        if (!_materia[i])
        {
            this->_materia[i] = m;
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