/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 17:32:04 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 17:32:04 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif