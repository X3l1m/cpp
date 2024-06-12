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
	void addContact(std::string) {contacts[0].firstName = "John";};
};


int main()
{
	PhoneBook book;

	book.contacts[0].firstName = "John";
	
	
	
	return 0;
}
