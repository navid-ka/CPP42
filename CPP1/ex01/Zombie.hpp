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
#include <string>

class Zombie {
  public:
    Zombie();
    ~Zombie(void);
    void announce(void);
    std::string getName(void);
    void setName(std::string name);

  private:
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
