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


class Ice : public AMateria{
private:
    std::string _name;
public:
    Ice();
    Ice(const Ice &oldIce);
    Ice &operator=(const Ice &rhs);
    ~Ice();

    AMateria* clone() const;
	void use(ICharacter& target);
};