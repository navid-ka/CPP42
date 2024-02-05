/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2){
        std::cerr << "Not enough args" << std::endl;
        return (1);
    }
    std::string level = argv[1];

    std::string error = "ERROR";

    harl.complain(level);

    return 0;
}