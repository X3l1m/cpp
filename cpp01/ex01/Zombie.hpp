/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 18:12:21 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 18:12:21 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif