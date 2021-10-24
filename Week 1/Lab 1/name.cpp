/****************************************
 * Name:Ruben Sanduleac
 * Date: October 24th, 2021
 * Program uses name class to get the users name
 */
#include "name.h"

void name::setFirstName(std::string first)
{
    firstName = first;
}

void name::setLastName(std::string last)
{
    lastName = last;
}

std::string name::getFirstName()
{
    return firstName;
}

std::string name::getLastName()
{
    return lastName;
}
