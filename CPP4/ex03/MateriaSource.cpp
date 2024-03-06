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
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() { }

MateriaSource::MateriaSource(const MateriaSource &oldMateriaSource) { *this = &oldMateriaSource; }

MateriaSource& MateriaSource::operator=(const MateriaSource __attribute__((unused))&rhs) {
    return *this;
}
MateriaSource::~MateriaSource() { }