#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::ifstream orj(argv[1]);
	std::ofstream rplc(argv[1] + std::string(".replace"));
}