#include "Zombie.hpp"

/*
	"new"
	- dynamic memory allocation
	- allocates memory on the heap
	- returns pointer to that memory
*/
Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie;

	// Creates new object and return its pointer
	newZombie = new Zombie(name);
	return (newZombie);
}
