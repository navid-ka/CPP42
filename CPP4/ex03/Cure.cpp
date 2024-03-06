/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp" 

Cure::Cure() : AMateria("cure") { }

Cure::Cure(const Cure __attribute__((unused))&oldCure) : AMateria("cure") { }

Cure::Cure &operator=(const Cure __attribute__((unused))&rhs) { return *this; }

Cure::~Cure() { }

AMateria* Cure::clone() const { return new Cure(); }

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
