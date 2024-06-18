#include "PhoneBook.hpp"

std::string getInput()
{
	std::string input;
	do {
		if (!std::getline(std::cin, input))
		{
			if (std::cin.eof())
				std::cout << C_YEL << "\nEOF" << C_RST;
			std::cout << std::endl;
			exit(1);
		}
		if (input.empty())
			std::cout << C_RED << "Write something..." << C_RST << std::endl << ": ";
	} while (input.empty());
	return input;
}

bool isAllNum(std::string str)
{
	for (char c : str)
	{
		if (!std::isdigit(c))
			return false;
	}
	return true;
}

bool isAllAlpha(std::string str)
{
	for (char c : str)
	{
		if (!std::isalpha(c))
			return false;
	}
	return true;
}

int main(void)
{
	PhoneBook	book;
	std::string	input;
	int			i = 0;

	while (true)
	{
		std::cout << C_BLU << "Enter ADD, SEARCH or EXIT: " << C_RST;
		if (i > 7)
			i = 0;
		input = getInput();
		if (input == "ADD")
		{
			if (!book.initContact(i++))
				break;
		}
		else if (input == "SEARCH")
		{
			book.search();
		}
		else if (input == "EXIT")
		{
			std::cout << C_YEL << "Exiting" << C_RST << std::endl;
			break;
		}
		else if (!input.empty())
			std::cout << C_RED << "Invalid command" << C_RST << std::endl;
	}
	return 0;
}
