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
#include <string>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &oldMateria);
	AMateria &operator=(const AMateria &oldMateria);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);
};