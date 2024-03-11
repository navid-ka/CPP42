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

#define SLOTS 4
#define COLLECTOR 10000000

class Character : public ICharacter {
private:
    std::string _name;
    AMateria * _inventory[SLOTS];
    AMateria * _garbage[10000000];
public:
    Character(const std::string name);
    Character(const Character &oldCharacter);
    Character &operator=(const Character &rhs);
    ~Character();

    std::string const & getName() const;

    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};
