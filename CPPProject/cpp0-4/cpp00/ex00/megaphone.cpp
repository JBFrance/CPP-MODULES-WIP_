#include <iostream>
#include <cctype>

static void	str_capitalize(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (std::islower(str[i]))
			std::cout << static_cast<char>(std::toupper(str[i]));
		else
			std::cout<<str[i];
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			str_capitalize(argv[i]);
		std::cout << std::endl;
	}
}