#include "PhoneBook.hpp"
#include <iostream>
#include <cctype>

bool is_num(const std::string& str)
{
    int i = 0;
    while (str[i])
    {
        char c = str[i];
        if (!std::isdigit(c))
            return false;
        i++;
    }
    return true;
}

int	main()
{
    PhoneBook book;
	std::string str;
    while (true)
	{
		std::cout << "Please enter command: ";
		std::cin >> str;
		if (std::strncmp(str.c_str(), "ADD", 3) == 0)
            book.add();
		else if (std::strncmp(str.c_str(), "SEARCH", 6) == 0)
			book.display();
		else if (std::strncmp(str.c_str(), "EXIT", 4) == 0)
			break ;
		else
		{
			std::cout << "Invalid option: options are 'ADD' 'SEARCH' and 'EXIT'" << std::endl;
			continue ;
		}
	}
	return (0);
}