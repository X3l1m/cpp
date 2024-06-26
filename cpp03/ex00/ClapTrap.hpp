#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &assign);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		

}
#endif