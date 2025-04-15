/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/28 18:50:03 by seyildir      #+#    #+#                 */
/*   Updated: 2024/06/28 18:50:03 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	_name = assign._name;
	_hitPoints = assign._hitPoints;
	_energyPoints = assign._energyPoints;
	_attackDamage = assign._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is alredy dead!" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " has no energy points left to attack!" << std::endl;
	else {
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is alredy dead!" << std::endl;
	else {
		if (amount >= _hitPoints) {
			_hitPoints = 0;
			std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage and dies!" << std::endl;
		}
		else {
			_hitPoints -= amount;
			std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " is alredy dead!" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " has no energy points left to repair!" << std::endl;
	else {
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
	}
}
