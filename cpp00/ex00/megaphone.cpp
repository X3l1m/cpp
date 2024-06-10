#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int a = 1; argv[a]; a++)
			for (int b = 0; argv[a][b]; b++)
				std::cout << (char)toupper(argv[a][b]);
	}
	std::cout << std::endl;
	return 0;
}
