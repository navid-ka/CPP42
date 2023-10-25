/**********************************************************************/
/*                    | |                        (_)                  */                    
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */ 
/*              | | | |   <  __/ |_| | (_| | | | | |                  */ 
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */ 
/*                               __/ |                                */ 
/*                              |___/                                 */ 
/**********************************************************************/

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    size_t i = 0;
    std::string megaphone;
    if (argc < 2){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    } else
        for (i = 1; argv[i]; i++){
            megaphone = argv[i];
             for (size_t j = 0; j < megaphone.length(); j++){
                 megaphone[j] = toupper(megaphone[j]);
            }
            std::cout << megaphone;
        }
    std::cout << std::endl;
}