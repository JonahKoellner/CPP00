#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl , 0);
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for (int i = 0; i < (int)str.length(); i++)
			std::cout << (char)((str[i] >= 97 && str[i] <= 122) ? str[i] - 32 : str[i]);
	}
	std::cout << std::endl;
	return 0;
}
