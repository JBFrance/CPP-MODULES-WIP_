//
// Created by Joshua Franceschi on 10/28/23.
//

#ifndef CPPPROJECT_HUMANB_H
#define CPPPROJECT_HUMANB_H
#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    //Constructor
    HumanB(std::string name);
    //Destructor
    ~HumanB();
    //Methods
    void    attack();
    void    setWeapon(Weapon &weapon);
    void    setType(std::string type);
};


#endif //CPPPROJECT_HUMANB_H
