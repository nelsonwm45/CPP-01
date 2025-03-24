#include "Zombie.hpp"

/*
	Declaration and initialisation must happen together
*/
void	randomChump(std::string name)
{
	Zombie	newZombie(name);

	newZombie.announce();
}
