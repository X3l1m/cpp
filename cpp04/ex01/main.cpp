/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:35:50 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/29 18:35:50 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *Animals[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	std::cout << "DEEP COPY!!" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	Dog copy(*(Dog *)Animals[4]);
	for (int i = 0; i < 100; ++i)
	{
		std::cout << copy.getBrain()->getIdea(i) << "    ";
		std::cout << ((Dog *)Animals[4])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << "-----------------------------"
				<< std::endl;
	for (int i = 0; i < 10; ++i)
	{
		delete Animals[i];
	}
	return 0;
}

/* int main()
{
	Cat cat;
	Cat copy(cat);

	std::cout << &cat << std::endl;
	std::cout << &copy << std::endl;

	// delete dog;
	return 0;
} */