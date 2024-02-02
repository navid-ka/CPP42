/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */ 
/*              | | | |   <  __/ |_| | (_| | | | | |                  */ 
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */ 
/*                               __/ |                                */ 
/*                              |___/                                 */ 
/**********************************************************************/

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

void printInfo(void)
{
    std::cout << O << "Please enter one of the following options: ADD, SEARCH, EXIT" << E << std::endl;
    std::cout << T << "ADD: save a new contact" << E << std::endl;
    std::cout << Y << "SEARCH: display a specific contact" << E << std::endl;
    std::cout << R << "EXIT: The program quits and the contacts are lost forever!" << E << std::endl;
}

int main()
{
    PhoneBook agenda;
    Contact contact;

    std::cout << G <<"Welcome to the 80s" << E << std::endl;
    std::string option;
    printInfo();
    for (;;)
    {
        std::cout << C << "Please enter an option: " << E;
        if (!std::getline(std::cin, option)){
            std::cout << R << "Goodbye!" << E << std::endl;
            return 0;
        }
        for (int i = 0; option[i]; i++){
            option[i] = toupper(option[i]);
        }
        if (option == "ADD"){
            agenda.addContact();
        } else if (option == "SEARCH"){
            agenda.searchContact();
        } else if (option == "EXIT"){
            std::cout << R << "Goodbye!" << E << std::endl;
            return 0;
        } else {
            std::cout << R << "Please enter a valid option" << E << std::endl;
        }
    }
    return (0);
}