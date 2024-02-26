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

// virtual functions https://www.youtube.com/watch?v=T8f4ajtFU9g

class Animal {
    protected:
        std::string _type;
        Animal(const std::string &type);
    public:
        Animal();
        Animal(const Animal &oldAnimal);
        Animal &operator=(const Animal &oldAnimal);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};