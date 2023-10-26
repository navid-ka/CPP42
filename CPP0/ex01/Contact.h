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

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        size_t      phoneNumber;
        std::string darkSecret;
        std::string contacts[];
    public:
        void addContact(std::string& newContact)
        {
            for (size_t i = 0; i == contacts[i].length(); i++)
            {
                contacts[i] = newContact;
            }
        }
};