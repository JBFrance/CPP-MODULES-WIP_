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
    //Constructor
    Zombie();
    Zombie(const std::string name);
    //Destructor
    ~Zombie();
    void    setName(std::string name);
    void    announce(void);
};


#endif //CPP01_ZOMBIE_H
