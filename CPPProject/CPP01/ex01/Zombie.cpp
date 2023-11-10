//
// Created by Joshua Franceschi on 10/23/23.
//

#include "Zombie.hpp"


void Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    //std::cout << "Zombie default constructor called" << std::endl;
}

Zombie::Zombie(const std::string name)
{
    //std::cout << "Zombie " << name << " was created" << std::endl;
    this->_name = name;
};

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << "> deconstructed" << std::endl;
};

void Zombie::setName(std::string name)
{
    std::cout << "Zombie name was set to" << name << std::endl;
    this->_name = name;
}