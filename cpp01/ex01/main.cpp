/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 18:12:25 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 18:12:25 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;

	Zombie* zombies = zombieHorde(N, "kaka");
	for (int i = 0; N > i; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}