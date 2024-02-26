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
#include <iostream>
#include <string>

class Brain {
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain &oldBrain);
        Brain &operator=(const Brain &oldBrain);
        ~Brain();
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
};