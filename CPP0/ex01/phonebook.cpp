/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */ 
/*              | | | |   <  __/ |_| | (_| | | | | |                  */ 
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */ 
/*                               __/ |                                */ 
/*                              |___/                                 */ 
/**********************************************************************/

#include "PhoneBook.h"

#include <iostream>


int main()
{
    std::cout << "Welcome to the 80s" << std::endl;
    std::string option;
    //Switch maybe
    std::cout << "Enter an option" << std::endl;
    std::cout << "Please enter one of the following options: ADD, SEARCH, EXIT" << std::endl;
    std::cout << "ADD: save a new contact" << std::endl;
    std::cout << "SEARCH: display a specific contact" << std::endl;
    std::cout << "EXIT: The program quits and the contacts are lost forever!" << std::endl;
    while (42)
    {
        std::cin >> option;
        if (option == "ADD"){
            std::cout << "Added contact" << std::endl;
        } else if (option == "SEARCH"){
            std::cout << "Search" << std::endl;
        } else if (option == "EXIT"){
            return(0);
        }
    }
    //PhoneBook hola;
    //hola.print(10);
    return (0);
}