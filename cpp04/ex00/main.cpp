/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/29 18:35:12 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/29 18:35:12 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();
	const Animal *meta = new Animal();
	const WrongAnimal *wrong = new WrongCat();
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << wrong->getType() << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	wrong->makeSound();
	delete cat;
	delete dog;
	delete meta;
	delete wrong;
	return (0);
}
