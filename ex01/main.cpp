#include "Zombie.hpp"

/*
	This project mainly to learn about new && delete

	new - allocate a HEAP memory for the object/variable and return pointer of it
	delete - free the allocated memory

	memory allocated by new MUST be HEAP
*/
int	main()
{
	Zombie	*Horde;
	std::string	name;
	std::string	numZombie;

	std::cout << BLUE << "Enter Zombie Number: " << RESET;
	// std::cin >> numZombie;
	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, numZombie);
	std::cout << YELLOW << "Your Zombie Name will be all the same" << RESET << std::endl;
	std::cout << BLUE << "Your Zombie Name: " << RESET;
	std::getline(std::cin, name);
	Horde = zombieHorde(atoi(numZombie.c_str()), name);
	delete[] Horde;
	return (0);
}