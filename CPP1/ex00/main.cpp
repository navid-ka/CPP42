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

int main(void)
{
    Zombie *Foo;
    Foo = newZombie("Foo");
    
    Foo->announce();
    delete Foo;
    for (int i = 0; i < 10; i++){
        std::string name[10] = {"Foo", "Bar", "Baz", "Qux", "Quux", "Corge", "Grault", "Garply", "Waldo", "Fred" };
        randomChump(i[name]);
    }
    return (0);
}