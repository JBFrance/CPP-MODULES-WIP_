//
// Created by Joshua Franceschi on 10/23/23.
//

#ifndef CPP01_ZOMBIE_H
#define CPP01_ZOMBIE_H
#include <iostream>

class Zombie
{
    private:
    std::string _name;
    public:
    Zombie(const std::string name);
    void    setName(std::string name);
    void    announce(void);
    //Constructor
    Zombie();
    //Destructor
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);


#endif //CPP01_ZOMBIE_H
