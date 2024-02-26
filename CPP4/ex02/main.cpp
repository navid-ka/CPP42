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
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    //const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    //meta->makeSound();

    delete j;
    delete i;
    //delete meta;

    const WrongAnimal    *WrongAnimals[] =
	{
		new WrongAnimal(),
		new WrongCat(),
	};

    for (int i = 0; i < 2; i++)
    {
        WrongAnimals[i]->makeSound();
        delete WrongAnimals[i];
    }


    std::cout << "--------------------- EX02 TESTS" << std::endl;
    Animal * fiftyfifty[] =
	{
		new Cat(),
		new Dog(),
		new Dog(),
		new Cat(),
        new Dog(),
        new Cat(),
	};
	
	for (int i = 0; i < 6; i++)
		fiftyfifty[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete fiftyfifty[i];

    std::cout << "--------------------- DEEP COPY TESTS" << std::endl;

    Cat a;
    Cat b;
    a = b;
    std::cout << a.getType() <<  std::endl;   



    return 0;
}