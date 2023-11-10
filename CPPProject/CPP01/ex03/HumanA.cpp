//
// Created by Joshua Franceschi on 10/28/23.
//

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(&weapon) {}

HumanA::~HumanA() {
    std::cout << "HumanA " << this->name << " has been destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanA::setType(std::string type)
{
    this->weapon->setType(type);
}