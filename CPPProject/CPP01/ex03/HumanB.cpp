//
// Created by Joshua Franceschi on 10/28/23.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB() {
    std::cout << "HumanB " << this->name << " has been destroyed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::setType(std::string type)
{
    this->weapon->setType(type);
}