//
// Created by Joshua Franceschi on 10/28/23.
//

#ifndef CPPPROJECT_HUMANA_H
#define CPPPROJECT_HUMANA_H
#include "Weapon.h"

class HumanA {
private:
    std::string name;
    Weapon *weapon;
    public:
    //Constructor
    HumanA(std::string name, Weapon &weapon);
    //Destructor
    ~HumanA();
    //Method
    void    attack();
    void    setType(std::string type);
};


#endif //CPPPROJECT_HUMANA_H
