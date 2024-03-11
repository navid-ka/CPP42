/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#pragma once
#include <iostream>
#include "IMateriaSource.hpp"
#define SLOTS 4

class AMateria;

class MateriaSource : public IMateriaSource {
private: 
    AMateria *_materia[SLOTS];
public:
    MateriaSource();
    MateriaSource(const MateriaSource &oldMateriaSource);
    MateriaSource &operator=(const MateriaSource &rhs);
    ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    void printMaterias(void);
};