/**********************************************************************/
/*                    | |                        (_)                  */
/*               _ __ | | _____ _   _  __ _ _ __  _                   */
/*              | '_ \| |/ / _ \ | | |/ _` | '_ \| |                  */
/*              | | | |   <  __/ |_| | (_| | | | | |                  */
/*              |_| |_|_|\_\___|\__, |\__,_|_| |_|_|                  */
/*                               __/ |                                */
/*                              |___/                                 */
/**********************************************************************/

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string replacedFilename = filename + ".replace";

    std::ifstream file;
    std::ofstream outFile;

    file.open(filename.c_str());
    
    if (!file.is_open()) {
        std::cerr << "Error could open the file: " << std::endl;
        return (1);
    }
    outFile.open(replacedFilename.c_str());

    if (!outFile.is_open()) {
        std::cerr << "Error could open the file: " << std::endl;
        return (1);
    }

    std::string str;
    while (std::getline(file, str))
    {
        size_t pos = 0;
        while ((pos = str.find(s1, pos)) != std::string::npos) {
            str = str.erase(pos, s1.length());
            str = str.insert(pos, s2);
            pos += s2.length();
        }
        outFile << str << std::endl;
    }

    file.close();
    outFile.close();
    return 0;
}