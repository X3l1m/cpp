/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:27:42 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/19 16:27:42 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

size_t compare(std::string &s2, std::string &oldLine, size_t pos)
{
	size_t i = 0;

	while (s2[i])
		if (s2[i++] != oldLine[pos++])
			return 0;
	return i;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: <filename> <word> <replace word>" << std::endl;
		return 1;
	}
	std::ifstream oFile(argv[1]);
	if (!oFile.is_open())
	{
		std::cerr << "Error: " << argv[1] << " couldn't open" << std::endl;
		return 2;
	}

	std::ofstream rFile(argv[1] + std::string(".replace"));
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string oldLine;
	size_t      com;
	while (std::getline(oFile, oldLine))
	{
		size_t pos = 0;
		while (oldLine[pos])
		{
			while ((com = compare(s1, oldLine, pos)))
			{
				pos += com;
				rFile << s2;
			}
			if (oldLine[pos])
				rFile << oldLine[pos++];
		}
		if (!oFile.eof())
			rFile << '\n';
	}

	return 0;
}