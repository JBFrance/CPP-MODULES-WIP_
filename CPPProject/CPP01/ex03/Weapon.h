//
// Created by Joshua Franceschi on 10/28/23.
//

#ifndef CPPPROJECT_WEAPON_H
#define CPPPROJECT_WEAPON_H
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    //Constructors
    Weapon();
    Weapon(std::string type);
    //Destructor
    ~Weapon();
    //Methods
    const std::string &getType() const;
    void setType(const std::string &type);
};
#endif //CPPPROJECT_WEAPON_H
