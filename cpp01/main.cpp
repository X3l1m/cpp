#include "Zombie.hpp"

int main()
{
	Zombie* zombie = newZombie("Zombie");
	randomChump("Chump");
	zombie->~Zombie();
	return 0;
}