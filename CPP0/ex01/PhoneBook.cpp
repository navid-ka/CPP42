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
#include <sstream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->contactIndex = 0;
    this->contactCount = 0;
}

PhoneBook::~PhoneBook()
{
}


bool PhoneBook::is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void PhoneBook::addContact(void)
{
    const int maxContacts = 8;
    int requiredFields = 0;
    bool fieldCheck = false;
    std::string field;

    while (!fieldCheck)
    {
        std::cout << T << "Please enter the first name: " << E;
        std::getline(std::cin, field);
        if (field.empty()){
            std::cout << R << "Field cannot be empty" << E << std::endl;
        }
        else {
            this->contactList[this->contactIndex].setFirstName(field);
            requiredFields++;
            fieldCheck = true;
        }
    }
    fieldCheck = false;
    while (!fieldCheck)
    {
        std::cout << T << "Please enter the last name: " << E;
        std::getline(std::cin, field);
        if (field.empty())
            std::cout << R << "Field cannot be empty" << E << std::endl;
        else {
            this->contactList[this->contactIndex].setLastName(field);
            requiredFields++;
            fieldCheck = true;
        }
    }
    fieldCheck = false;
    while (!fieldCheck)
    {
        std::cout << T << "Please enter the nick name: " << E;
        std::getline(std::cin, field);
        if (field.empty())
            std::cout << R << "Field cannot be empty" << E << std::endl;
        else {
            this->contactList[this->contactIndex].setNickName(field);
            requiredFields++;
            fieldCheck = true;
        }
    }
    fieldCheck = false;
    while (!fieldCheck)
    {
        std::cout << T << "Please enter the number: " << E;
        std::getline(std::cin, field);
        if (field.empty())
            std::cout << R << "Field cannot be empty" << E << std::endl;
        if (!is_digits(field))
            std::cout << R <<  "Please enter a valid number" << E << std::endl;
        else {
            this->contactList[this->contactIndex].setNumber(field);
            requiredFields++;
            fieldCheck = true;
        }
    }
    fieldCheck = false;
    while (!fieldCheck)
    {
        std::cout << Y << "Please enter your Darkest Secret: " << E;
        std::getline(std::cin, field);
        if (field.empty())
            std::cout << R << "Field cannot be empty" << E << std::endl;
        else {
            this->contactList[this->contactIndex].setDarkestSecret(field);
            requiredFields++;
            fieldCheck = true;
        }
    }
    fieldCheck = false;
    if (requiredFields == 5) {
        std::cout << G << "Contact added succesfully at: " << this->contactIndex + 1 << E << std::endl;
        requiredFields = 0;
        countContacts = true;
        this->contactIndex = (this->contactIndex + 1) % maxContacts;
        this->contactCount++;
        if (this->contactCount > maxContacts)
            this->contactCount = maxContacts;
    }
}

void PhoneBook::printContact(int contactIndex)
{
    std::cout << G << "|         " << contactIndex + 1;
	std::cout << "|";
    this->contactList[contactIndex].getFirstName().length() > 10 ?
		std::cout << G << std::right << std::setw(9) << this->contactList[contactIndex].getFirstName().substr(0, 9) << "." << "|" :
        std::cout << G << std::right << std::setw(10) << this->contactList[contactIndex].getFirstName() << "|";

    this->contactList[contactIndex].getLastName().length() > 10 ?
		std::cout << G << std::right << std::setw(9) << this->contactList[contactIndex].getLastName().substr(0, 9) << "." << "|" :
        std::cout << G << std::right << std::setw(10) << this->contactList[contactIndex].getLastName() << "|";

    this->contactList[contactIndex].getNickName().length() > 10 ?
		std::cout << G << std::right << std::setw(9) << this->contactList[contactIndex].getNickName().substr(0, 9) << "." :
        std::cout << G << std::right << std::setw(10) << this->contactList[contactIndex].getNickName();
    std::cout << "|" << E << std::endl;   
}

void PhoneBook::printAllContacts(void)
{
    int i;

	i = 0;
	std::cout << O << "  AGENDA                                     " << E << std::endl;
	std::cout << G << " ___________________________________________ " << E << std::endl;
	std::cout << G << "|     Index|First Name| Last Name|  Nickname|" << E << std::endl;
	while (i < this->contactCount)
	{
		this->printContact(i);
		i++;
	}
	std::cout << G << "|__________|__________|__________|__________|" << E << std::endl;
}

void PhoneBook::searchContact(void)
{
    std::string pickedIndex;
    bool finished = false;
    if (!this->countContacts) {
        std::cout << R << "There is no contacts yet" << E << std::endl;
        return ;
    } else {
        this->printAllContacts();
        while (!finished)
        {
            int iPickedIndex = 0;
            std::cout << O << "Please provide a number from 1-8 to find the contact" << E << std::endl;
            std::getline(std::cin, pickedIndex);
            for (size_t i = 0; i < pickedIndex.length() && pickedIndex[i] >= '0' && pickedIndex[i] <= '9'; i++) {
                iPickedIndex = (iPickedIndex * 10) + (pickedIndex[i] - '0');
            }
            if (!is_digits(pickedIndex)) {
                std::cout << R << "Invalid number, the number should be from 1-8 to find the contact" << E << std::endl;
            }
            if (iPickedIndex <= 0 || iPickedIndex >= 9) {
                std::cout << R << "Number out of range, the number should be from 1-8 to find the contact" << E << std::endl;
            }
            else if (iPickedIndex > this->contactCount) {
                std::cout << R << "This contact is empty please select another one." << E << std::endl;
            }
            else {
				std::cout << G << "First name : " << this->contactList[iPickedIndex - 1].getFirstName() << std::endl;
				std::cout << "Last name : " << this->contactList[iPickedIndex - 1].getLastName() << std::endl;
				std::cout << "Nickname : " << this->contactList[iPickedIndex - 1].getNickName() << std::endl;
				std::cout << "Phone Number : " << this->contactList[iPickedIndex - 1].getNumber() << std::endl;
				std::cout << "Darkest Secret : " << this->contactList[iPickedIndex - 1].getDarkestSecret() << E << std::endl;
                finished = true;
            }
        }
    }
}
