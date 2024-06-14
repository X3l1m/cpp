#include "PhoneBook.hpp"


void	search(PhoneBook book)
{
	int s = 0;
	std::cout << "Searching contact\n";
	std::cin >> s;
	if (s >= 0 && s <= 7)
	{
		book.getContacts(s).getFirstName();
		book.getContacts(s).getLastName();
		book.getContacts(s).getNickName();
		book.getContacts(s).getPhoneNum();
		book.getContacts(s).getSecret();
	}
}

void	add(PhoneBook book)
{
	int i = 0;
	std::cout << "Adding contact" << std::endl;
	book.getContacts(i).setFirstName();
	book.getContacts(i).setLastName();
	book.getContacts(i).setNickName();
	book.getContacts(i).setPhoneNum();
	book.getContacts(i).setSecret();
	std::cout << "Contact added" << std::endl;
}


int main(void)
{
	PhoneBook book;
	std::string input;
	int i = 0;

	while (1)
	{
		if (i > 7)
			i = 0;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "EOF detected" << std::endl;
			break;
		}
		if (input == "ADD")
		{
			add(book);
			i++;
		}
		if (input == "SEARCH")
		{
			search(book);
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
