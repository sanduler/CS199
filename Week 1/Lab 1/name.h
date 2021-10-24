/****************************************
 * Name:Ruben Sanduleac
 * Date: October 24th, 2021
 * Program uses name class to get the users name
 */

#ifndef LAB_1_NAME_H
#define LAB_1_NAME_H
#include <string>

class name {
private:
    std::string firstName;
    std::string lastName;
public:
    void setFirstName(std::string);
    void setLastName(std::string);
    std::string getFirstName();
    std::string getLastName();
};


#endif //LAB_1_NAME_H
