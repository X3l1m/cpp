#include "PhoneBook.hpp"

std::string getInput()
{
	std::string input;
	do {
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			exit(1);
		}
		if (input.empty())
			std::cout << "It can not be empty" << std::endl << ": ";
	} while (input.empty());
	return input;
}

bool isAllNum(std::string str)
{
	(void)str;
	return true;
}

bool isAllAlpha(std::string str)
{
	(void)str;
	return true;
}

int main(void)
{
	PhoneBook	book;
	std::string	input;
	int			i = 0;

	while (1)
	{
		std::cout << "Enter ADD, SEARCH or EXIT: ";
		if (i > 7)
			i = 0;
		if (!std::getline(std::cin, input))
		{
			std::cout << std::endl;
			exit(1);
		}
		else if (input == "ADD")
		{
			if (!book.add(i++))
				break;
		}
		else if (input == "SEARCH")
		{
			book.search();
		}
		else if (input == "EXIT")
		{
			std::cout << "Exiting" << std::endl;
			break;
		}
		else if (!input.empty())
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//alpha num check
//index check
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@