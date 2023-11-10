# include <iostream>
#include "Contact.h"

bool is_num(const std::string& str);

std::string Contact::getFirst()
{
    return (firstName);
}

std::string Contact::getLast()
{
    return (lastName);
}

std::string Contact::getNick()
{
    return (nickName);
}

std::string Contact::getPhone()
{
    return (phoneNumber);
}

std::string Contact::getSecret()
{
    return (secret);
}

void Contact::init()
{
    std::cout << "Please enter first name: " << std::flush;
    std::cin >> firstName;
    std::cout << "Please enter last name: " << std::flush;
    std::cin >> lastName;
    std::cout << "Please enter nick name: " << std::flush;
    std::cin >> nickName;
    std::cout << "Please enter phone number: " << std::flush;
    std::cin >> phoneNumber;
    while (!is_num(phoneNumber))
    {
        phoneNumber = "";
        std::cout << "Please only enter numeric characters" << std::endl;
        std::cin >> phoneNumber;
    }
    secret = "";
    std::cout << "Please enter their darkest secret): " << std::flush;
    std::cin.ignore();
    getline(std::cin, secret);
}
