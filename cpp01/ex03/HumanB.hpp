#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		void attack();
};

#endif