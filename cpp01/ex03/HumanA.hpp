#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;

	public:
		void attack(void);
};

#endif