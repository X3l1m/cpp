/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/28 18:49:55 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/28 18:49:55 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Vara");

	claptrap.attack("Pere");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.beRepaired(3);
	claptrap.beRepaired(3);
	claptrap.beRepaired(3);
	claptrap.beRepaired(3);
	claptrap.attack("Pere");
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.attack("Pere");
	claptrap.beRepaired(3);
	claptrap.beRepaired(3);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.attack("Pere");
	return 0;
}