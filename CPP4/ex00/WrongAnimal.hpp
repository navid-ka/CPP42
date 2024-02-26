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

class WrongAnimal {
    protected:
        std::string _type;
        WrongAnimal(const std::string &type);
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &oldWrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &oldAWrongAnimal);
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        std::string getType() const;
};