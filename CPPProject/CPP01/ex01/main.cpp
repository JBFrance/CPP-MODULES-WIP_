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
    Zombie *zombies = zombieHorde(5, "Zomboid");
    for (int i = 0; i < 5; i++)
    {
        zombies[i].announce();
    }
    delete[] zombies;
    return 0;
}
