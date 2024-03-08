/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default") { }

AMateria::AMateria(std::string const & type) : _type(type) { }

AMateria::AMateria(const AMateria &oldMateria) {
    *this = oldMateria;
}

AMateria &AMateria::operator=(const AMateria &oldMateria) {
    if (this != &oldMateria)
    {
        this->_type = oldMateria._type;
    }
    return *this;
}

AMateria::~AMateria() { }

std::string const &AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter __attribute__((unused))&target) { }

