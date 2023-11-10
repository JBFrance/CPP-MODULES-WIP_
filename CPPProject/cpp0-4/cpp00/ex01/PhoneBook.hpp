#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>
#include "Contact.h"

class PhoneBook
{
	private: 
		Contact	contacts[8];
	public:
    void    display();
    void    add();
    void    setColumns();
    void    indexPrompt();
    static void    printContact(const std::string& str);
};
#endif