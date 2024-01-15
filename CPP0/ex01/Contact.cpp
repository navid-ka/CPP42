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
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getFirstName()
{
   return (this->firstName);
}

void Contact::setFirstName(std::string first)
{
   this->firstName = first;
}

std::string Contact::getLastName()
{
   return (this->lastName);
}

void Contact::setLastName(std::string last)
{
   this->lastName = last;
}
std::string Contact::getNickName()
{
   return (this->nickName);
}

void Contact::setNickName(std::string nick)
{
   this->nickName = nick;
}


std::string Contact::getNumber()
{
   return (this->number);
}

void Contact::setNumber(std::string num)
{
   this->number = num;
}

std::string Contact::getDarkestSecret()
{
   return (this->darkestSecret);
}

void Contact::setDarkestSecret(std::string dark)
{
   this->darkestSecret = dark;
}

/* void Contact::setContactInfo(Contact *contact) {
    std::cout << "Please enter the first name: ";
    std::cin >> contact->firstName;
    std::cout << "Please enter the last name: ";
    std::cin >> contact->lastName;
    std::cout << "Please enter the Nickname ";
    std::cin >> contact->nickName;
    std::cout << "Please enter the number: ";
    std::cin >> contact->number;
    std::cout << "Please enter the darkest secret: ";
    std::cin >> contact->darkestSecret;
}

 void Contact::searchContactInfo(Contact *contact)
 {
    std:: cout << "HELLO" << std::endl;
    std:: cout << contact->firstName << std::endl;
    std:: cout << contact->firstName << std::endl;
 }
*/