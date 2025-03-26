#include "Zombie.hpp"

/*
	Horde = new Zombie[N];
	This allocates memory for N objects of type Zombie in a single contiguous block.

	also can use constructor to set the name
	Horde = new Zombie[N] {Zombie(name)}; // Use constructor
*/
Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*Horde;

	Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].setZombieName(name);
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	return (Horde);
}

