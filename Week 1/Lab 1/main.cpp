/****************************************
 * Name:Ruben Sanduleac
 * Date: October 24th, 2021
 * Program uses name class to get the users name
 */
#include <iostream>
#include <string>
#include "name.h"

int main()
{
    name myName;
    std::string firstName;
    std::string lastName;
    std::cout << "I will get your name \n" << std::endl;
    std::cout << "Please enter you first name: ";
    std::cin >> firstName;
    std::cout << "Please enter you last name: ";
    std::cin >> lastName;
    std::cout << "\n";
    myName.setFirstName(firstName);
    myName.setLastName(lastName);

    std::cout << "My name is: " << myName.getFirstName() << " " << myName.getLastName();
    return 0;
}
