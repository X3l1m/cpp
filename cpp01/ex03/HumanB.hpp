/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/18 20:08:01 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/18 20:08:01 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon& weapon);
};

#endif