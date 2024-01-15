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

# define E "\033[m"        //end
# define R "\033[1;31m"    //red
# define G "\033[1;32m"    //green
# define Y "\033[1;33m"    //yellow
# define B "\033[1;34m"    //blue
# define T "\033[1;35m"	   //Turquesa
# define C "\033[1;36m"    //Cyan
# define O "\033[38;5;208m" //orange
# define F "\033[38;5;128m"  //purple

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string number;
    std::string darkestSecret;

public:
    Contact();
    ~Contact();
    //void setContactInfo(Contact *contact);
    std::string getFirstName();
    void setFirstName(std::string first);
    std::string getLastName();
    void setLastName(std::string last);
    std::string getNickName();
    void setNickName(std::string nick);
    std::string getNumber();
    void setNumber(std::string num);
    std::string getDarkestSecret();
    void setDarkestSecret(std::string darkest);
    //void searchContactInfo(Contact *contact);
    void printContactInfo(Contact *contact);
};
