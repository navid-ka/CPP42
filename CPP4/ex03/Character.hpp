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
#include "AMateria.hpp"
#include <string>


class Character : public ICharacter {
private:
    std::string _name;
public:
    Character(const std::string name);
    Character(const Character &oldCharacter);
    Character &operator=(const Character &rhs);
    ~Character()
};
