//
// Created by Joshua Franceschi on 30/10/2023.
//

#ifndef CPPPROJECT_HARL_H
#define CPPPROJECT_HARL_H
#include <iostream>

class Harl
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    void    complain(std::string level);

};


#endif //CPPPROJECT_HARL_H
