#include <iostream>
#include <string>

class Contact
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string secret;
};

class PhoneBook
{
	public:
	Contact contacts[8];
};


int main()
{
	PhoneBook book;
	std::string input;

	while (1)
	{

		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "EOF detected\n";
			break;
		}
		if (input == "ADD")
		{
			std::cout << "Adding contact\n";
		}
		if (input == "SEARCH")
		{
			std::cout << "Searching contact\n";
		}
		if (input == "EXIT")
		{
			std::cout << "Exiting\n";
			break;
		}
		std::cin.clear();
	}
	return 0;
}
