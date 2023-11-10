//
// Created by Joshua Franceschi on 10/25/23.
//

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *zombie1 = new Zombie();
    zombie1->setName(name);
    return zombie1;
}

void randomChump(std::string name)
{
    Zombie chump(name);
    chump.announce();
}

int main(void)
{
    Zombie *zombie1 = newZombie("heapZomboid");
    randomChump("stackZomboid");

    zombie1->announce();
    delete zombie1;
    return 0;
}
