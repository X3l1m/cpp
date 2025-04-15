/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/28 18:50:12 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/28 18:50:12 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
	_gateKeeperMode = false;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	_gateKeeperMode = false;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_gateKeeperMode = copy._gateKeeperMode;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this == &assign)
		return (*this);
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	_gateKeeperMode = assign._gateKeeperMode;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " is alredy dead!" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << " has no energy points left to attack!" << std::endl;
	else {
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (_gateKeeperMode)
		std::cout << "ScavTrap " << _name << " has already entered gate keeper mode!" << std::endl;
	else {
		_gateKeeperMode = true;
		std::cout << "ScavTrap " << _name << " has entered gate keeper mode!" << std::endl;
	}
}
