/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>


PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::add(std::string option)
{
    Contact contact;
    std::string firstName, lastName;

    std::cout << "Please enter the first name: ";
    std::cin >> firstName;
    std::cout << "Please enter the last name: ";
     std::cin >> lastName;
    contact.setContactInfo(firstName, lastName);
    std::cout << "Name entered is " + firstName << std::endl;
    return (option);
}
