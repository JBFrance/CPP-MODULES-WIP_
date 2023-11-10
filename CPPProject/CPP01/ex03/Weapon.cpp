//
// Created by Joshua Franceschi on 10/28/23.
//

#include "Weapon.h"
Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(){}

const std::string &Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(const std::string &type)
{
    this->type = type;
}