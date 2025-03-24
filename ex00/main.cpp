#include "Zombie.hpp"

/*
	This project mainly to learn about new && delete

	new - allocate a HEAP memory for the object/variable and return pointer of it
	delete - free the allocated memory

	memory allocated by new MUST be HEAP

	so if we declare the constructor 
*/
int	main()
{
	Zombie	*current;

	std::cout << RED << "New Zombie is going to spawn" << RESET << std::endl;

	current = newZombie("Foo");
	delete(current);

	std::cout << RED << "New Zombie is going to spawn" << RESET << std::endl;

	current = newZombie("Melissa");
	delete(current);

	std::cout << RED << "New Zombie is going to spawn" << RESET << std::endl;
	randomChump("Michael");

	std::cout << RED << "New Zombie is going to spawn" << RESET << std::endl;
	randomChump("Mian");

	return (0);
}