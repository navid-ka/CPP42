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
#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
    Contact contactList[8];
    bool    countContacts;
    int     contactIndex;
    int     contactCount;
    void printContact(int contactIndex);
    bool is_digits(const std::string &str);
    void printAllContacts(void);
public:
    PhoneBook();
    ~PhoneBook();
    void addContact(void);
    void searchContact(void);
};
