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
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &oldDog);
        Dog &operator=(const Dog &oldDog);
        ~Dog();
        void makeSound() const;
};