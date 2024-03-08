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
#include "ICharacter.hpp"
#include "AMateria.hpp"


class Cure : public AMateria {
public:
    Cure();
    Cure(const Cure &oldCure);
    Cure &operator=(const Cure &rhs);
    ~Cure();

    AMateria* clone() const;
	void use(ICharacter& target);
};