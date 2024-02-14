/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "ClapTrap.hpp"
#include <iostream>

int main(void) {
    ClapTrap meow("Meow");
    ClapTrap meowKiller("MeowKiller");
    ClapTrap noNameMeow("");
    ClapTrap copyMeow(meow);

    meow.attack("MeowKiller");
    meowKiller.takeDamage(5);
    meowKiller.attack("Meow");
    meow.takeDamage(5);
    meow.beRepaired(5);
}