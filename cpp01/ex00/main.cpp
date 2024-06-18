/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 17:32:11 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 17:32:11 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie = newZombie("Zombie");
	zombie->announce();
	delete zombie;
	randomChump("Chump");
	return 0;
}