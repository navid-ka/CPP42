/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>
#include <ctime>

int main(void)
{
    Zombie* forTheHorde;
    int zombs = 10;
    srand (time(NULL));
    std::string name[10] = {"Foo", "Bar", "Baz", "Qux", "Quux", "Corge", "Grault", "Garply", "Waldo", "Fred" };
    forTheHorde = zombieHorde(zombs, name[rand() % 10]);
    
    //forTheHorde = zombieHorde(zombs, "Lucas");
    for (int i = 0; i < zombs; i++){
        i[forTheHorde].announce();
    }
    delete [] forTheHorde;
    return (0);
}