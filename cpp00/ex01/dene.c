#include <iostream>
#include <string>

using namespace std;

string fonskiyon(string& str)
{
	str += "123";
	return str;
}

int main()
{
	string str = "deneme";
	cout << fonskiyon(str) << endl;
	cout << str << endl;
}