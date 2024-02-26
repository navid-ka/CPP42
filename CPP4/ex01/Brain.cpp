/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &oldBrain) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = oldBrain;
}

Brain &Brain::operator=(const Brain &oldBrain) {
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &oldBrain) {
        for (int i = 0; i < 100; i++) {
            _ideas[i] = oldBrain._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const {
    return _ideas[index];
}

void Brain::setIdea(int index, const std::string &idea) {
    _ideas[index] = idea;
}
