cmake_minimum_required(VERSION 3.26)
project(CPPProject)

set(CMAKE_CXX_STANDARD 98)

add_executable(CPPProject
        cpp0-4/cpp00/ex02/Account.cpp
        cpp0-4/cpp00/ex02/tests.cpp
        CPP01/ex00/main.cpp
        CPP01/ex00/Zombie.cpp
        CPP01/ex03/HumanA.cpp
        CPP01/ex03/HumanB.cpp
        CPP01/ex03/main.cpp
        CPP01/ex03/Weapon.cpp
        CPP02/ex01/Fixed.h
)
