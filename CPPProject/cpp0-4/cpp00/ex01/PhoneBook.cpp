#include "PhoneBook.hpp"
# include <iostream>
# include <iomanip>

void    PhoneBook::printContact(const std::string& str)
{
    if (str.size() <= 10)
        std::cout << std::setw(10) << str << "|";
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".|";
    }
}

void    PhoneBook::setColumns()
{
    std::cout << std::setw(11) << "Index|" << std::setw(11) << "Name|" << std::setw(11) << "Last name|" << std::setw(11) << "Nickname|" << std::endl;
    for (int j = 0; j < 8; j++)
    {
        std::cout << std::setw(10) << j << "|";
        printContact(contacts[j].getFirst());
        printContact(contacts[j].getLast());
        printContact(contacts[j].getNick());
        std::cout << std::endl;
    };
}

void    PhoneBook::indexPrompt()
{
    std::cout << "Enter index of contact: ";
    std::string index;
    std::cin >> index;
    for (size_t i = 0; i < index.size(); i++)
    {
        if (index[i] < '0' || index[i] > '9')
        {
            std::cout << "Index not found" << std::endl;
            return ;
        }
    }

    int i = atoi(index.data());
    if (i >= 0 && i <= 7 && !contacts[i].getFirst().empty())
    {
        std::cout << "First name: " << contacts[i].getFirst() << std::endl;
        std::cout << "Last name: " << contacts[i].getLast() << std::endl;
        std::cout << "Nickname: " << contacts[i].getNick() << std::endl;
        std::cout << "Phone number: " << contacts[i].getPhone() << std::endl;
        std::cout << "Darkest secret: " << contacts[i].getSecret() << std::endl;
    }
    else
        std::cout << "Index not found" << std::endl;
}

void    PhoneBook::display()
{
    setColumns();
    indexPrompt();
}

void    PhoneBook::add()
{
    static int i = 0;

    this->contacts[i].init();
    i++;
    if (i == 8) {
        i = 0;

    }
}


