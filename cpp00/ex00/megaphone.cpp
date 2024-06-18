#include <iostream>
#include <cctype>

int main(int argc, char const *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int a = 1; argv[a]; a++)
		{
			std::string str = argv[a];
			for (char& c : str)
				std::cout << (char)std::toupper(c);
		}
	}
	std::cout << std::endl;
	return 0;
}
